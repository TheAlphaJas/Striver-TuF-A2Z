class Solution {
public:
    string largestOddNumber(string num) {
        int z = 0;
        string ans = "";
        for(int i =num.size()-1;i>-1;i--) {
            if (z==1) {ans+=num[i];}
            else {
                if ((num[i] - '0') % 2 == 1) {z=1; ans+=num[i];}
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
