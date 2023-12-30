class Solution {
    public boolean makeEqual(String[] words) {
        if(words.length==1)
        return true;
        
        int total=0;
        for(String s:words)
        total+=s.length();
        
        if(total%words.length!=0)
        return false;

        int m[]=new int[26];

        for(String s:words)
        {
            for(char c:s.toCharArray())
            {
                m[c-'a']++;
            }
        }
        for(int i:m)
        {
            if(i%words.length!=0)
            return false;
        }
        return true;
    }
}