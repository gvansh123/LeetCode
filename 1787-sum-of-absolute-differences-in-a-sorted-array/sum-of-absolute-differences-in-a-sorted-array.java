class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int sum=0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
        }
        int result[]=new int[nums.length];
        int left=0,right=sum;
        for(int i=0;i<nums.length;i++){
            right-=nums[i];
            result[i]=nums[i]*i-left+right-nums[i]*(nums.length-i-1);
            left+=nums[i];
        }
    return result;
    }
}