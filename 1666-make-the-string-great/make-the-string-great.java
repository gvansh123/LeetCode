class Solution {
    public String makeGood(String s) {
        Stack<Character> st=new Stack<>();
        for(char c:s.toCharArray())
        {
            if(st.empty())
            st.push(c);
            else
            {
                if(Math.abs((int)(st.peek()-c))==32)
                st.pop();
                else
                st.push(c);
            }
        }
        String ans="";
        while(!st.empty())
        {
            ans=st.peek()+ans;
            st.pop();
        }
        return ans;
    }
}