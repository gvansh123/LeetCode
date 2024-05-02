class Solution {
    public int findMaxK(int[] nums) {
       int ans=-1;
        HashMap<Integer,Integer> hm=new HashMap<>();
        for(int i=0;i<nums.length;i++) {
            if(nums[i]<0) {
                hm.put(nums[i],0);
            }
        }
         for(int i=0;i<nums.length;i++) {
             if(nums[i]>0) {
                if(hm.containsKey((-1)*nums[i])) {
                    if(nums[i]>ans) ans=nums[i];
                }
             }
         }
         return ans; 
    }
}