class Solution {
public:
    bool ispalin(string &s) {
        int n = s.size();
        for(int i= 0;i<n;i++) {
            if (s[i]!=s[n-1-i]) {return 0;}
        }
        return 1;
    }
    vector<vector<string>> partition(string &s) {
        if (s.size() == 1) {
            vector<vector<string>> ans;
            vector<string> b;
            string g;
            g+=s[0];
            b.push_back(g);
            ans.push_back(b);
            return ans;
        }
        if (s.size() == 0) {
            vector<vector<string>> ans;
            vector<string> b;
            // string g="";
            // b.push_back(g);
            ans.push_back(b);
            return ans;
        }
        int n = s.size();
        string curr;
        string rem = s;
        vector<vector<string>> ans;
        vector<string> t;
        for(int i =0;i<n;i++) {
            curr += s[i];
            rem.erase(0,1);
            if (ispalin(curr) == 0) {continue;}
            vector<vector<string>> v = partition(rem);
            for(auto x:v) {
                t.clear();
                t.push_back(curr);
                for(auto y:x) {t.push_back(y);}
                // t.insert(t.begin(),curr.begin(),curr.end());
                ans.push_back(t);
            }
        }
        return ans;
    }
};
