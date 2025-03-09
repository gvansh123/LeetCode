class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int b=prices[0];
      int pr=0;
      for(int i=1;i<prices.size();i++)
      {
        b=min(b,prices[i]);
        pr=max(pr,prices[i]-b);
      } 
      return pr; 
    }
};