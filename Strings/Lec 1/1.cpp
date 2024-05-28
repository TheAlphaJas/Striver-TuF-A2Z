class Solution {
public:
    string prc(deque<char> &s) {
            if (s[0] == '(' && s[s.size()-1] == ')') {
                s.pop_front();
                s.pop_back();
            }
            string g = "";
            for(auto x:s) {g+=x;}
            return g;
    }
    string removeOuterParentheses(string s) {
        int z = 0;
        deque<char> D;
        string ans = "";
        for(int i =0;i<s.size();i++) {
            if (s[i] == '(') {z++;} else {z--;}
            D.push_back(s[i]);
            if (z == 0) {ans = ans + prc(D); D.clear();}
        }
        return ans;
    }
};
