class Solution {
    public String intToRoman(int nums) {
        String a[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        String b[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        String c[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        String d[]={"","M","MM","MMM"};
        int q=nums%10;
        int w=(nums%100)/10;
        int e=(nums%1000)/100;
        int r=nums/1000;
        return d[r]+c[e]+b[w]+a[q];
    }
}