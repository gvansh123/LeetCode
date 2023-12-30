class Solution {
    public int titleToNumber(String cT) {
        int r=0;
        for(char c:cT.toCharArray())
        {
            int d=c-'A'+1;
            r=r*26+d;
        }
        return r;
    }
}