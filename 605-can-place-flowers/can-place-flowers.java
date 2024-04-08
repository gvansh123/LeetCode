class Solution {
    public boolean canPlaceFlowers(int[] f, int n) {
        for(int i=0;i<f.length;i++)
        {
            if(n==0)
            return true;
            if(i==0&&f[i]==0)
            {
                i++;
                if(f.length==1)
                n--;
                else if(i<f.length&&f[i]==0)
                n--;
                

            }
            else if(i<f.length-1&&f[i]==0&&f[i-1]==0&&f[i+1]==0)
            {
                n--;
                i++;
            }
            else if(i==f.length-1&&f[i]==0)
            {
                if(f[i-1]==0)
                n--;
            }
        }
        if(n<=0)return true;
        return false;

    }
}