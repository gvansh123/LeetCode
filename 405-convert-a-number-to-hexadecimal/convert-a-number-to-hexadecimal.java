class Solution {
    public String toHex(int num) {
        if(num==0){
            return "0";
        }
        StringBuilder s = new StringBuilder();
        while(num!=0){
            int r = num & 15;
            char c = (char) (r<10 ? r+'0': r-10+'a');
            s.append(c);
            num>>>=4;
        }
        return s.reverse().toString();
    }
}