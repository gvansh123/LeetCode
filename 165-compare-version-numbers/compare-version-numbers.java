public class Solution {
public int compareVersion(String v1, String v2) {
    int t1 = 0,t2 = 0;
    int len1 = v1.length(),len2 = v2.length();
    int i = 0,j = 0;
    while(i<len1 || j<len2) {
        t1 = 0;
        t2 = 0;
        while(i<len1 && v1.charAt(i) != '.') 
        {
            t1 = t1*10 + v1.charAt(i++)-'0';
        }
        while(j<len2 && v2.charAt(j) != '.') 
        {
            t2 = t2*10 + v2.charAt(j++)-'0';
        }
        if(t1>t2) 
            return 1;
        else if(t1<t2) 
            return -1;
        else 
        {
            i++;
            j++; 
        }
        
    }
    return 0;
}
}