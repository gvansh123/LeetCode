class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            if(i!=0&& nums[i]==nums[i-1])
            continue;

            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]+nums[i]==0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    res.push_back(temp);
                    j++;k--;
                    while(j<k&& nums[j]==nums[j-1])
                    j++;
                    while(j<k&& nums[k]==nums[k+1])
                    k--;

                }
                else if(nums[j]+nums[k]+nums[i]>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return res;
    }
};