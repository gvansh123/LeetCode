class Solution {
    public List<Boolean> kidsWithCandies(int[] c, int e) {
        List<Boolean> l=new ArrayList<>();
        int mx=-1;
        for(int i:c)
            mx=Math.max(i,mx);
        for(int i:c)
        {
            if((i+e)>=mx)
            l.add(true);
            else
            l.add(false);
        }
        return l;
    }
}