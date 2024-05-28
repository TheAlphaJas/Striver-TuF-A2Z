class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        unsigned long  m = INT_MAX;
        for(auto x:strs) {m  = min(m,x.size());}
        for(int i = 0;i<m;i++) {
            set<char> S;
            for(auto x:strs) {
                S.insert(x[i]);
            }
            if (S.size() == 1) {ans+=*S.begin();} else {break;}
            S.clear();
        }
        return ans;
    }
};
