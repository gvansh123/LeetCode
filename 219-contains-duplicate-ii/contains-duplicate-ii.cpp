class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=1;i<nums.size();i++)
        {
            int x=v[i].first;
            int a=v[i].second;
            int y=v[i-1].first;
            int b=v[i-1].second;

            if(x==y&&abs(b-a)<=k)
            return true;
        }
        return false;
    }
};