class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n==0)
        return false;
        if(n<0)
        return false;
        int c=0;
        while(n!=0)
        {
            c=c+(n&1);
            n=n>>1;
        }
        return c==1?true:false;
    }
}