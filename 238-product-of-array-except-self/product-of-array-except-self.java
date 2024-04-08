class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int l[]=new int[n];
        int r[]=new int[n];
        int ans[]=r.clone();
        l[0]=1;
        r[n-1]=1;
        for(int i=1;i<n;i++)
        l[i]=l[i-1]*nums[i-1];
        for(int j=n-2;j>=0;j--)
        {
            r[j]=r[j+1]*nums[j+1];
        }
        for(int i=0;i<n;i++)
        ans[i]=l[i]*r[i];
        return ans;
    }
}