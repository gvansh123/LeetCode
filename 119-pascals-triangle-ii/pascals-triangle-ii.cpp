class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> v;
        vector<int> z={1};
        if(n==0)
        return z;
        for (int i = 1; i <=n; ++i)
		{
            vector<int> temp;
			temp.push_back(1);
			for (int j = 1; j <i ; ++j)
			{
				int u=v[j-1]+v[j];
                temp.push_back(u);
			}
            temp.push_back(1);
            v=temp;
		}
        return v;
    }
};