class Solution {
    public String evaluate(String s, List<List<String>> knowledge) {
       Map<String, String> map = new HashMap<>();
        for (List<String> i : knowledge) 
        {
            String key = i.get(0);
            String value = i.get(1);
            map.put(key, value);
        }
        String ans="";
        int i=0;
        while(i<s.length())
        {
            char c=s.charAt(i);
            if(c=='(')
            {
                i++;
                int a=i;
                while(s.charAt(i)!=')')
                {
                    i++;
                }
                int b=i;
                String temp=map.get(s.substring(a,b));
                ans+=temp==null?"?":temp;
            }
            else
            {
                ans+=c;
            }
            i++;
        }
        return ans;
    }
}