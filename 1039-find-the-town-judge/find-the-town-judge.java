class Solution {
    public int findJudge(int n, int[][] trust) {
        int a[]=new int[n+1];
        Arrays.fill(a,0);
        for(int i=0;i<trust.length;i++)
        {
            a[trust[i][1]]++;
            a[trust[i][0]]--;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==n-1)
            {
                return i;
            }
        }
        return -1;
    }
}