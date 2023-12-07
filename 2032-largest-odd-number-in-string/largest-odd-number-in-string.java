class Solution {
    public String largestOddNumber(String num) {
        int x=num.length()-1;
        for(;x>=0;x--)
        {
            if((num.charAt(x)-'0')%2!=0)
            {
                break;
            }
        }
        if(x==0){
        if((num.charAt(x)-'0')%2==0)
        return "";
        else 
        return num.substring(0,1);
        }
        else
        return num.substring(0,x+1);
    }
}