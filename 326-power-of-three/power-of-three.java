class Solution {
    public boolean isPowerOfThree(int n) {
        long ans=1;
        long t=1;
        while(ans<n)
        {
            ans=(long)Math.pow(3,t++);
        }
        if(ans==n)
        return true;
        return false;
    }
}