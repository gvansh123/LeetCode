class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int n=nums.length;
        int diff=Integer.MAX_VALUE;
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(k>j)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                return sum;
                if(Math.abs(target-sum)<diff)
                {
                    diff=Math.abs(target-sum);
                    ans=sum;
                }
                if(sum<target)
                j++;
                else
                k--;
            }
        }
        return ans;
    }
}