class Solution {
    public int count(String s,char c)
    {
            int m=0;
            for(int i=1;i<s.length();i++)
            {
                char curr=s.charAt(i);
                if(curr==c)
                {
                    m++;
                    c=c=='0'?'1':'0';
                }
                else
                {
                    c=curr;
                }
            }
            return m;
    }
    public int minOperations(String s) {
        char c=s.charAt(0);
        int c1=count(s,c=='0'?'1':'0')+1;
        int c2=count(s,c);
        return Math.min(c2,c1);
    }
}