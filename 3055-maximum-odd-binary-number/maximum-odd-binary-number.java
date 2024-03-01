class Solution {
    public String maximumOddBinaryNumber(String s) {
        int c0=0,c1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='0')
            c0++;
            else
            c1++;
        }
        String ans="";
        while(c1>1)
        {
            ans+="1";
            c1--;
        }
        while(c0>0)
        {
            ans+="0";
            c0--;
        }
        ans+='1';
        return ans;
    }
}