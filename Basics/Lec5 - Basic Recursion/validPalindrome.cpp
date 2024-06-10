class Solution {
public:
    bool isPalindrome(string s) {
        string m;
        for(auto x:s) {
            if (x>='a' && x<='z') {
                m+=x;
            } else if (x>='A' && x<='Z') {
                m+=(x+'a'-'A');
            }
            if (x>='0' && x<='9') {m+=x;}
        }
        int i=0,j=m.size()-1;
        while(i<j) {if (m[i]!=m[j]) {return 0;} i++; j--;}
        return 1;
    }
};
