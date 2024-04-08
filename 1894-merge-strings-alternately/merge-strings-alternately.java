class Solution {
    public String mergeAlternately(String a, String b) {
        String ans="";
        int i=0,j=0;
        while(i<a.length()&&j<b.length())
        {
            ans+=String.valueOf(a.charAt(i++))+String.valueOf(b.charAt(j++));
        }
        if(i!=a.length())
        ans+=a.substring(i);
        if(j!=b.length())
        ans+=b.substring(j);
        return ans;
    }
}