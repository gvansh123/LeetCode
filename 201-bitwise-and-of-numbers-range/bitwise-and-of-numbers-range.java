class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        int n=31;
        int ans=0;
        while(n>=0)
        {
            if((left&(1<<n))==(right&(1<<n)))
               ans|=left&(1<<n);
            else
            break;
            n--;
        }
        return ans;
    }
}