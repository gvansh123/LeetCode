class Solution {
    public int totalMoney(int n) {
        int ans=0;
        int x=n/7;
        int t=n%7;
        ans=7*(x*(x-1))/2;
        ans+=t*(t+1)/2+x*t;
        ans+=(x*28);
        return ans;
    }
}