class Solution
{ 
	public:
		vector<string> all_longest_common_subsequences(string s, string t)
		{
		    int n = s.size();
		    int m = t.size();
		    vector<vector<vector<string>>> dp(n,vector<vector<string>>(m));
		    for(int i = 0;i<n;i++) {
		        for(int j = 0;j<m;j++) {
		            if (i == 0 && j == 0) {
		                if (s[0] == t[0]) {
		                    string g = "";
		                    g += s[0];
		                    vector<string> temp;
		                    temp.push_back(g);
		                    dp[i][j] = temp;
		                } else {
		                    continue;
		                }
		            }
		            if (i==0) {
		                if (s[i] == t[j]) {string g = ""; g+=s[i];  dp[i][j].push_back(g);} else {dp[i][j] = dp[i][j-1];}
		                continue;
		            }
		            if (j==0) {
		                if (s[i] == t[j]) {string g = ""; g+=s[i];  dp[i][j].push_back(g);} else {dp[i][j] = dp[i-1][j];}
		                continue;
		            }
		            if (s[i] == t[j]) { set<string> S; if(dp[i-1][j-1].size()>0) {for(auto x:dp[i-1][j-1]) { if (S.count(x+s[i])) {continue;}S.insert(x+s[i]); dp[i][j].push_back(x + s[i]);}} else {string g=""; g+=s[i]; dp[i][j].push_back(g);}}
		            else {
		                if ((dp[i-1][j].size() == 0)&&(dp[i][j-1].size() == 0)) {continue;}
		                if (dp[i][j-1].size() == 0) {
		                    dp[i][j] = dp[i-1][j];
		                    continue;
		                }
		                if (dp[i-1][j].size() == 0) {
		                    dp[i][j] = dp[i][j-1];
		                    continue;
		                }
		                int l1 = dp[i-1][j][0].size();
		                int l2 = dp[i][j-1][0].size();
		                int maxlen = max(l1,l2);
		                set<string> S;
		                if (dp[i-1][j][0].size() == maxlen) {
		                    for(auto x:dp[i-1][j]) {
		                        if (S.count(x)) {continue; }
		                        dp[i][j].push_back(x);
		                        S.insert(x);
		                    }
		                }
		                if (dp[i][j-1][0].size() == maxlen) {
		                    for(auto x:dp[i][j-1]) {
		                        if (S.count(x)) {continue; }
		                        dp[i][j].push_back(x);
		                        S.insert(x);
		                    }
		                }
		            }
		        }
		    }
		    set<string> S;
		    for(auto x:dp[n-1][m-1]) {S.insert(x);}
		    dp[n-1][m-1].clear();
		    vector<string> ans;
		    for(auto x:S) {
		    ans.push_back(x);
		    }
		    return ans;
		}
};
