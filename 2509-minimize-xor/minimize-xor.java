class Solution {
    public static int getSet(int x)
    {
        int c=0;
        while(x!=0)
        {
            if((x&1)==1)
            {
                c++;
            }
            x=x>>1;
        }
        return c;
    }
    public int minimizeXor(int num1, int num2) {
       int x=getSet(num1);
       int y=getSet(num2);
       System.out.println(x+" "+y);
       if(x==y)
       {
        return num1;
       }
       if(x>y)
       {
            int t=x-y;
            for(int i=0;i<32&&t!=0;i++)
            {
                if(((1<<i)&num1)!=0)
                {
                num1=(num1^(1<<i));
                t--;
                }
            }
          return num1;
       }
       int t=y-x;
       for(int i=0;i<32&&t!=0;i++)
       {
            if((num1&(1<<i))==0)
            {
                num1=num1|(1<<i);
                t--;
            }
       }
       return num1;
    }
}