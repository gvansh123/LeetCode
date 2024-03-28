class Solution {
    public String complexNumberMultiply(String num1, String num2) {
        int br=num1.indexOf('+');
        int r1=Integer.parseInt((num1.substring(0,br)));
        int i1=Integer.parseInt(num1.substring(br+1,num1.length()-1));
        br=num2.indexOf('+');
        int r2=Integer.parseInt(num2.substring(0,br));
        int i2=Integer.parseInt(num2.substring(br+1,num2.length()-1));
        int ans1=(r1*r2)-(i1*i2);
        int ans2=(r1*i2)+(i1*r2);
        String ans=Integer.toString(ans1)+"+"+Integer.toString(ans2)+"i";
        return ans;
    }
}