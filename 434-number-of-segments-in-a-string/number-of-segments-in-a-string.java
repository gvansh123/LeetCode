import java.util.*;
class Solution {
    public int countSegments(String s) {
        StringTokenizer st=new StringTokenizer(s);
        int ans=0;
        while(st.hasMoreTokens())
        {
            String t=st.nextToken();
            ans++;
        }
        return ans;
    }
}