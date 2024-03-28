class Solution {
    boolean eq(int a[],int b[])
    {
        for(int i=0;i<26;i++)
        if(a[i]!=b[i])
        return false;
        return true;
    }
    public boolean checkInclusion(String s1, String s2) {
        if(s1.length()>s2.length())
        return false;
        int a[]=new int[26];
        for(char c:s1.toCharArray())
            a[c-'a']++;
        int b[]=new int[26];
        int i=0,j=0;
        while(j<s2.length())
        {
            b[s2.charAt(j)-'a']++;
            if((j-i+1)==s1.length())
                if(eq(a,b))
                    return true;
            if((j-i+1)<s1.length())
            j++;
            else
            {
                b[s2.charAt(i)-'a']--;
                i++;
                j++;
            }
        }
        return false;


    }
}