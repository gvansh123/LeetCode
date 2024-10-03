class Solution {
public:
    bool isHappy(int n) {
        if(n<10)
        return n==1||n==7;
       while(n>=10) 
       {
            int n1=n;
            int s=0;
            while(n1!=0)
            {
                s+=(n1%10)*(n1%10);
                n1/=10;
            }
            n=s;
       }
       return n==1||n==7;
    }
};