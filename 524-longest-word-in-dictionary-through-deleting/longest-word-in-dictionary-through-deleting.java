class Solution {
    public String findLongestWord(String s, List<String> d) {
        String ans="";
        int l=0;
        Collections.sort(d);
        for(String t:d)
        {
            if(t.length()<=s.length())
            {
                int f=0;
                for(char c:s.toCharArray())
                {
                    if(c==t.charAt(f))
                    {
                        f++;
                        if(f==t.length())
                        {
                            if(l<t.length())
                            {
                                l=t.length();
                                ans=t;
                            }
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
}