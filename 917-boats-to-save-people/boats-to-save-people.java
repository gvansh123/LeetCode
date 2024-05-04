class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int ans=0;
        int s=0;
        int e=people.length-1;
        Arrays.sort(people);
        while(s<=e)
        {
            if((people[s]+people[e])<=limit)
            {
                s++;
            }
                ans++;
                e--;
        }
        return ans;
    }
}         