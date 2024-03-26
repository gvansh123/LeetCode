class Solution {
    public boolean rotateString(String s, String goal) {
        for(int i=0;i<s.length();i++)
        {
            s=s.substring(1)+s.charAt(0);
            // System.out.println(s);
            if(s.equalsIgnoreCase(goal))
            return true;
        }
        return false;
    }
}