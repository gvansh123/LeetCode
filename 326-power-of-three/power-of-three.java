class Solution {
    public boolean isPowerOfThree(int n) {
        return n>0&& ((long)Math.pow(3,19)%n==0);
    }
}