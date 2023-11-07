class Solution {
    public int eliminateMaximum(int[] dist, int[] speed) {
        int n = dist.length;
        double[] tenp = new double[n];
        
        for (int i = 0; i < n; i++) {
            tenp[i] = (double)dist[i] / speed[i];
        }
        
        Arrays.sort(tenp);
        
        for (int i = 0; i < n; i++) {
            if (tenp[i] <= i) {
                return i;
            }
        }
        
        return n;
    }
}