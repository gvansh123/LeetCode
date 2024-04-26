class Solution {
    public boolean validSquare(int[] p1, int[] p2, int[] p3, int[] p4) {
        int[][] p = {p1,p2,p3,p4};
        Set<Integer> dis=new HashSet<>();
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<4;j++)
            {
                int t =(p[i][0] - p[j][0]) * (p[i][0] - p[j][0]) +(p[i][1] - p[j][1]) * (p[i][1] - p[j][1]);
                dis.add(t);
            }
        }   
       return !dis.contains(0) && dis.size()==2;
    }
}