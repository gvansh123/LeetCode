class Solution {
    public int mySqrt(int x) {
        if(x==0)
        return 0;
    double eps=1e-9;
    double lo=1;
    double hi=x;
    double mid;
    while(hi-lo>eps)
    {
        mid=hi-(hi-lo)/2;
        if(mid*mid<x)
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    int t=(int)Math.ceil(lo);
    if(t*t==x)
    return t;
    return (int)(lo);
    }
}