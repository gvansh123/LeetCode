class Solution {
    boolean vow(char c)
    {
        return c=='a'|c=='e'|c=='o'|c=='i'|c=='u';
    }
    public int vowelStrings(String[] words, int l, int r) {
        int ans=0;
        for(int i=l;i<=r;i++)
        if(vow(words[i].charAt(0))&& vow(words[i].charAt(words[i].length()-1)))
        ans++;
        return ans;
    }
}