class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string w = "";
        for(int i = 0;i<s.size();i++) {
            if (s[i] == ' ') { v.push_back(w); w.clear();} else {w+=s[i];}
        }
        if (w.size()!=0) {v.push_back(w);}
        reverse(v.begin(),v.end());
        string ans = "";
        for(auto x:v) {
            if (x!=" " && x.size()> 0) {ans+=x; ans += " ";}
            
        }
        ans.resize(ans.size()-1);
        return ans;
    }
};
