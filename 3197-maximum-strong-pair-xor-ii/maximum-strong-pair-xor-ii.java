class Solution {
    class Trie{
        Trie left=null;
        Trie right=null;
        int fre=0;
    }
    void insert(int num,Trie root){
         for(int i=20;i>=0;i--){
            int bit=(num & (1<<i))>0 ? 1 :0;
            if(bit==1){
                if(root.right==null){
                    root.right=new Trie();
                }
                root=root.right;
            }else{
                if(root.left==null){
                    root.left=new Trie();
                }
                root=root.left;
            }
            root.fre++;
         }
    }
    void remove(int num,Trie root){
        for(int i=20;i>=0;i--){
            int bit=(num & (1<<i))>0 ? 1 :0;
            if(bit==1){
                root=root.right;
            }else{
                root=root.left;
            }
            if(root!=null)root.fre--;
            else break;
         }
    }
    int find(int num,Trie root){
        int ans=0;
        for(int i=20;i>=0;i--){
            int bit=(num & (1<<i))>0 ? 0 :1;
            if(bit==1){
                if(root.right!=null && root.right.fre>0){
                    ans |=(1<<i);
                    root=root.right;
                }else if(root.left.fre>0){
                    root=root.left;
                }else{
                    return ans;
                }
                
            }else{
                if(root.left!=null && root.left.fre>0){
                    ans |=(1<<i);
                    root=root.left;
                }else if(root.right.fre>0){
                    root=root.right;
                }else{
                    return ans;
                }
            }
        }
        return ans;
    }
    public int maximumStrongPairXor(int[] nums) {
        Arrays.sort(nums);
        Trie root=new Trie();
        int l=0,i=0,j=0;
        int ans=0;
        while(i<nums.length ){
            while(j<nums.length && nums[j]-nums[i]<=nums[i]){
                insert(nums[j],root);
                j++;
            }
            while(l<nums.length && nums[i]-nums[l]>nums[l]){
                remove(nums[l],root);
                l++;
            }
            ans=Math.max(ans,find(nums[i],root));
            i++;
        }
        return ans;
    }

}