class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1)
        return 1;

        vector<int> v(n,1);

        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                v[i]=v[i-1]+1;
            }
        }

        for(int i=n-1;i>0;i--)
        {
            if(ratings[i-1]>ratings[i])
            {
                v[i-1]=max(v[i]+1,v[i-1]);
            }
        }
        

        int ans=0;
        for(int i:v)
        ans+=i;
        return ans;
    }
};