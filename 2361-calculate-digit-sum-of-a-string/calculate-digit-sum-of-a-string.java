class Solution {
    public String digitSum(String s, int k) {
        int i=0;
        while(s.length()>k){
            i=0;
            String temp="";
            while(i<s.length()){
                if(i+k>s.length()){
                    temp+=sum(s.substring(i,s.length()));
                }
                else{
                    temp+=sum(s.substring(i,i+k));
                }  
                i+=k;
            }
            s=temp;
        }
        return s;
    }
    public String sum(String s){
        int i=0;
        int sum=0;
        while(i<s.length()){
            sum+=s.charAt(i)-'0';
            i++;
        }
        return Integer.toString(sum);
    }
}