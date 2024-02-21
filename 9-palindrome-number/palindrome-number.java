class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
        return false;
        int n1=x;
        int p=0;
        while(n1!=0)
        {
            p=p*10+(n1%10);
            n1/=10;
        }
        return p==x?true:false;
    }
}