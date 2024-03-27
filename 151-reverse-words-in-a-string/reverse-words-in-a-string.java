import java.util.*;
class Solution {
    public String reverseWords(String st) {
        StringTokenizer s=new StringTokenizer(st);
        String ans="";
        while(s.hasMoreTokens())
        {
            String t=s.nextToken();
            ans=t+" "+ans;
        }
        ans=ans.substring(0,ans.length()-1);
        return ans;
    }
}