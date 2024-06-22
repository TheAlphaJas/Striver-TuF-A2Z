class Solution {
public:
    map<int,vector<string>> mp;
    vector<string> yes(string s, map<int,vector<string>> &mp) {
        if (s.size() == 1) {return mp[s[0]];}
        string g = s;
        g.resize(g.size()-1);
        vector<string> t = yes(g, mp);
        int n = t.size();
        vector<string> ans;
        for(int i=0;i<n;i++) {
            for(auto x:mp[s[s.size()-1]]) {
                ans.push_back(t[i]+x);
            }
        }
        return ans;
    }
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {vector<string> k = {}; return k;}
       mp['2'] = {"a","b","c"};
mp['3'] = {"d","e","f"};
mp['4'] = {"g","h","i"};
mp['5'] = {"j","k","l"};
mp['6'] = {"m","n","o"};
mp['7'] = {"p","q","r","s"};
mp['8'] = {"t","u","v"};
mp['9'] = {"w","x","y","z"};
        if (digits.size() == 1) {return mp[digits[0]];}
        return yes(digits, mp);
    }
};