class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& q) {
        map<long long,pair<int,int>> mp;
        int n=s.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;++i)
        {
            long long val=0;
            for(int j=i;j<min(i+32,n);++j)
            {
                if(s[j]=='1')
                {
                    val=val*2+1;
                  
                }
                else
                {
                    val=val*2;
                }
                if(mp.find(val)!=mp.end())
                {
                    pair<int,int> p=mp[val];
                    if((p.second-p.first)>(j-i))
                    {
                        mp[val]={i,j};
                    }
                }
                else
                {
                    mp[val]={i,j};
                }
            }
        }
        for(auto it:q)
        {
            if(mp.find(it[0]^it[1])==mp.end())
            {
                ans.push_back({-1,-1});
            }
            else
            {
                vector<int> a={mp[it[0]^it[1]].first,mp[it[0]^it[1]].second};
                ans.push_back(a);
            }
        }

        return ans;
    }
};