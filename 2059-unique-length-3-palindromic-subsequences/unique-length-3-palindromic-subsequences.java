class Solution {
    public int countPalindromicSubsequence(String s) {
        int ans=0;
        Set<Character> st=new HashSet<Character>();
        for(char c:s.toCharArray())
        st.add(c);
        
        for(char c : st)
        {
            int a=s.indexOf(c);
            int b=s.lastIndexOf(c);
            if(a<b)
            {
               Set<Character> temp=new HashSet<Character>(); 
               for (int i = a + 1; i < b; i++) {
                    temp.add(s.charAt(i));
                }
                ans += temp.size();
            }
        }
        return ans;
    }
}