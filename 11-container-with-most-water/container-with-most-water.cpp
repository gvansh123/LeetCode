class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int mx=0;
        while(i<j)
        {
            int t=min(height[i],height[j]);
            mx=max(mx,t*(j-i));
            if(t==height[i])
            i++;
            else
            j--;
        }
        return mx;
    }
};