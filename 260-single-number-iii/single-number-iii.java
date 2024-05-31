class Solution {
    public int[] singleNumber(int[] nums) {
        int p=0;
        if(nums.length==2)
         return nums; 
        
        for(int i:nums)
        p^=i;

        int rsb=(p&(p-1))^p;

        int n1=0;
        int n2=0;

        for(int i:nums)
        {
            if((i&rsb)==0)
            n1^=i;
            else
            n2^=i;
        }
        return new int[]{n1,n2};

    }
}