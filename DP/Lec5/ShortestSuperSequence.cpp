class Solution {
public:
    string longestsubstring(string &a, string &b) {
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(n,vector<int>(m));
        for(int i = 0;i<n;i++) {
            for(int j = 0;j<m;j++) {
                if (i==0 && j == 0 ){
                    dp[i][j] = (a[i] == b[j]);
                    continue;
                }
                    if (i == 0) {
                        dp[i][j] = (a[i] == b[j]);
                        dp[i][j] = max(dp[i][j],dp[i][j-1]);
                        continue;
                    }
                    if (j == 0) {
                        dp[i][j] = (a[i] == b[j]);
                        dp[i][j] = max(dp[i][j],dp[i-1][j]);
                        continue;
                    }
                if (a[i] == b[j]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int i = n-1; int j = m-1;
        string s="";
        int maxlen = dp[n-1][m-1];
        cout<<maxlen<<endl;
        while(s.size() < maxlen) {
            if (a[i] == b[j]) {
                s+=a[i];
                i--;
                j--;
            } else {
                if (i==0) {
                    j--;
                    continue;
                }
                if (j==0) {
                    i--;
                    continue;
                }
                if (dp[i-1][j] > dp[i][j-1]) {
                    i--;
                } else {
                    j--;
                }
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string s = longestsubstring(str1,str2);
        int n = str1.size();
        int m  = str2.size();
        int i = 0; 
        int j = 0;
        int c = 0;
        string ans;
        while(c<s.size() && i<n && j<m) {
            while(str1[i]!=s[c]) {ans+=str1[i]; i++;}
            while(str2[j]!=s[c]) {ans+=str2[j]; j++;}
            ans+=s[c];
            c++;
            i++; j++;
        }
        while(i<n) {
            ans+=str1[i];
            i++;
        }
        while(j<m) {
            ans+=str2[j];
            j++;
        }
        return ans;
    }
};
