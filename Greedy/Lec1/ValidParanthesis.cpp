class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int best=0,worst=0;
        for(int i=0;i<n;i++) {
            if (s[i] == '(') {best++; worst++;}
            if (s[i] == ')') {best--; worst--;}
            if (s[i] == '*') {best++; worst--;}
            worst = max(worst,0);
            if (best < 0) {return 0;}
        }
        if (best<0) {return 0;}
        if (worst > 0) {return 0;}
        return 1;
    }
};

