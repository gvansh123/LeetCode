class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
         return n;
        
        unordered_set<int> s;
        for(auto i:nums)
        s.insert(i);

        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                int count=1;
                int curr=nums[i];
                while(s.find(curr+1)!=s.end())
                {
                    curr++;
                    count++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};