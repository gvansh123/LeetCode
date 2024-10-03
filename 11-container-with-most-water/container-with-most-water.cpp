class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        int i=0;
        int j=h.size()-1;
        while(i<j)
        {
            int x=min(h[i],h[j]);
            ans=max(ans,(int)(x*(j-i)));
            if(x==h[i])
            i++;
            else
            j--;
        }
        return ans;
    }
};