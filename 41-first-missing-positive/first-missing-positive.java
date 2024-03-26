class Solution {
    public static void swap(int arr[],int i,int j)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    public int firstMissingPositive(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            while (nums[i] <= n && nums[i] > 0 && nums[i] != i+1 && nums[nums[i]-1] != nums[i]) 
                swap(nums,i, nums[i]-1);
        }
    for (int i=0; i<n; i++)
            if (nums[i] != i+1) return i+1;

        return n+1;
    }
}