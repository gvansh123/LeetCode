class Solution {
    public int minOperations(int[] nums, int k) {
        int f=0;
        for(int i:nums)
        {
            f^=i;
        }
        f^=k;
        int ans=0;
        while(f!=0)
        {
            if((f&1)!=0)
            ans++;
            f=f>>1;
        }
        return ans;
    }
}