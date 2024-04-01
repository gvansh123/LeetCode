class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();
        int x=s.lastIndexOf(' ');
        return s.length()-x-1;
    }
}