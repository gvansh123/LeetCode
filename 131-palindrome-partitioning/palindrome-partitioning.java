class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> list = new ArrayList<>();
        List<String> temp = new ArrayList<>();
        solve(0,s,temp,list);
        return list;
    }
    static void solve(int q,String s,List<String> temp,List<List<String>> list){
        if(q == s.length())
        {
            list.add(new ArrayList<>(temp));
            return;
        }
        for(int i = q;i<s.length();i++){
            if(palin(s,q,i)){
                temp.add(s.substring(q,i+1));
                solve(i+1,s,temp,list);
                temp.remove(temp.size()-1);
            }
        }
    }
    static boolean palin(String s,int i,int j){
        while(i<=j){
            if(s.charAt(i++)!=s.charAt(j--)){
                return false;
            }
        }
        return true;
    }
}