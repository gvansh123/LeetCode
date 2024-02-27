class ATM {
    private int a[];
    public ATM() {
        a=new int[5];
        Arrays.fill(a,0);
    }
    
    public void deposit(int[] b) {
        for(int i=0;i<b.length;i++)
        a[i]+=b[i];
    }
    
    public int[] withdraw(int amount) {
        if(amount%10!=0)
        return new int[]{-1};
        int fh=0,th=0,h=0,f=0,t=0;
        if(a[4]>0)
        {
            if(a[4]*(long)500<=amount)
            {
                fh=a[4];
                amount-=a[4]*500;
            }
            else
            {
                fh=amount/500;
                amount%=500;
            }
        }
        if(a[3]>0)
        {
            if(a[3]*(long)200<=amount)
            {
                th=a[3];
                amount-=a[3]*200;
            }
            else
            {
                th=amount/200;
                amount%=200;
            }
        }
        if(a[2]>0)
        {
            if(a[2]*(long)100<=amount)
            {
                h=a[2];
                amount-=a[2]*100;
            }
            else
            {
                h=amount/100;
                amount%=100;
            }
        }
        if(a[1]>0)
        {
            if(a[1]*(long)50<=amount)
            {
                f=a[1];
                amount-=a[1]*50;
            }
            else
            {
                f=amount/50;
                amount%=50;
            }
        }
        if(a[0]>0)
        {
            if(a[0]*(long)20<=amount)
            {
                t=a[0];
                amount-=a[0]*20;
            }
            else
            {
                t=amount/20;
                amount%=20;
            }
        }

        if(amount==0)
        {
            a[0]-=t;
            a[1]-=f;
            a[2]-=h;
            a[3]-=th;
            a[4]-=fh;
            return new int[]{t,f,h,th,fh};
        }
        return new int[]{-1};
    }
}

/**
 * Your ATM object will be instantiated and called as such:
 * ATM obj = new ATM();
 * obj.deposit(banknotesCount);
 * int[] param_2 = obj.withdraw(amount);
 */