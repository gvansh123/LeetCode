class Solution {
    public int maximumXOR(int[] nums) {
        int ans=0;
        for(int i:nums)
        {
            ans=ans|i;
        }
        return ans;
    }
}
/*
011
010
100
110

/*technincally 1 ko 0

0001
0010
0011
1001
0010
*/