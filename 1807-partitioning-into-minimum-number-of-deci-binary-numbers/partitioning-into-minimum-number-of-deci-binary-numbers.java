class Solution {
    public int minPartitions(String n) {
        int ans=-1;
        for(char c:n.toCharArray())
        {
            if((c-'0')>ans)
            ans=c-'0';
        }
        return ans;
    }
}