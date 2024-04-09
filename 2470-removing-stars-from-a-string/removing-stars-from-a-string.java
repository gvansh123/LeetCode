class Solution {
    public String removeStars(String s) {
        int i=s.length()-1;
        String ans="";
        while(i>=0)
        {
            char c=s.charAt(i);
            if(c=='*')
            {
                int rem=0;
                while(c=='*'){
                    rem++;
                    i--;
                    c=s.charAt(i);
                } 
                i++;
                while(rem!=0)
                {
                    i--;
                    c=s.charAt(i);
                    if(c=='*')
                    rem++;
                    else
                    rem--;
                }
            }
            else
            {
                ans=String.valueOf(c)+ans;
            }
            i--;
        }
        return ans;
    }
}