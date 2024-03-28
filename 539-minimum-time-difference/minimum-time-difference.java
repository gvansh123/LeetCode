class Solution {
    public int findMinDifference(List<String> time) {
        ArrayList<Integer> l=new ArrayList<>();
        for(String s:time)
        {
            int t=Integer.parseInt(s.substring(0,2))*60+Integer.parseInt(s.substring(3));
            l.add(t);
        }
        Collections.sort(l);
        int diff=Integer.MAX_VALUE;
        int s=l.get(0);
        for(int i=1;i<l.size();i++)
        {
            diff=(l.get(i)-s)<diff?l.get(i)-s:diff;
            s=l.get(i);
        }
        int h=(24*60-s)+(l.get(0));
        diff=h<diff?h:diff;
        return diff;
    }
}