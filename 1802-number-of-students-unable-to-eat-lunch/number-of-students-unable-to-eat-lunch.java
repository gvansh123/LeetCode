class Solution {
    public int countStudents(int[] st, int[] sa) {
        int st1=0,st0=0;
        for(int i :st)
        {
            if(i==1)
            st1++;
            else
            st0++;
        }
        for(int i:sa)
        {
            if(i==1)
            {
                if(st1==0)
                return st0;
                st1--;
            }
            else
            {
                if(st0==0)
                return st1;
                st0--;
            }
        }
        return 0;
    }
}