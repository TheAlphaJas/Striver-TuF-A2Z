class Solution {
public:
    long int minsolve(int i, int j,string &s1, string &s2, vector<vector<int>> &dp) {

        if (dp[i][j] != -1) {return dp[i][j];}
        if (i == 0 && j != 0) {
            //check through arr if it exists, if yes return j else j+1
            int fl=0;
            for(int d = 0;d<=j;d++) {
                if (s1[i] == s2[d]) {fl=1; break;}
            }
            return (j +1-fl);
        }
        if (i == 0 && j == 0) {
            return dp[i][j] = !(s1[i] == s2[j]);
        }
        if (i != 0 && j==0) {
            bool fl=0;
            for(int idx=0;idx<=i;idx++) {
                if (s1[idx] == s2[j]) {fl=1; break;}
            }
            if (fl) {
                return (dp[i][j] = i);
            } else {
                return dp[i][j] = i+1;
            }
        }

        if (s1[i] != s2[j]) {
        long int insert = 1 + minsolve(i,j-1,s1,s2,dp);
        //cout<<insert;
        long int replace = 1 + minsolve(i-1,j-1,s1,s2,dp);
        long int dele = 1 + minsolve(i-1,j,s1,s2,dp);
        return dp[i][j] =min({insert,replace,dele});
        } else {
            return dp[i][j] = minsolve(i-1,j-1,s1,s2,dp);
        }
    }
    int minDistance(string word1, string word2) {
        if (word1.size() == 0 && word2.size() == 0) {return 0;}
        if (word1.size() == 0 && word2.size() != 0) {return word2.size();}
        if (word1.size() !=0 && word2.size() == 0) {return word1.size();}
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return minsolve(n-1,m-1,word1,word2,dp);
    }
};
