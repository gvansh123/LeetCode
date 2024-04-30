class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string str = "";
        int j = 0;
        while(true){
            str.push_back(s[j]);
            if(j == 9) break;
            j++;
        }

        int i = 0;
        i++;
        j++;
        unordered_map<string,int> m;
        m[str]++;
        while(j<s.length()){
            str.push_back(s[j]);
            string temp = str.substr(i,10);
            m[temp]++;
            i++;
            j++;
        }
        

        vector<string> ans;

        for(auto x : m){
            if(x.second > 1){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};