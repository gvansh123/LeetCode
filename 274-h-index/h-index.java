class Solution {
    public int hIndex(int[] cit) {
    int n = cit.length;
    int[] buckets = new int[n+1];
    for(int c : cit) {
        if(c >= n) {
            buckets[n]++;
        } else {
            buckets[c]++;
        }
    }
    int count = 0;
    for(int i = n; i >= 0; i--) {
        count += buckets[i];
        if(count >= i) {
            return i;
        }
    }
    return 0;
    }
}