class Solution {
    public static boolean vowel(char c)
    {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    public String reverseVowels(String s) {
        Stack<Character> l=new Stack<>();
        for(char c :s.toCharArray())
        {
            if(vowel(c))
              l.push(c);
        }
        String ans="";
        for(char c :s.toCharArray())
        {
            if(vowel(c))
            {
              ans+=String.valueOf(l.peek());
              l.pop();
            }
            else
            ans+=c;
        }
        return ans;
    }
}