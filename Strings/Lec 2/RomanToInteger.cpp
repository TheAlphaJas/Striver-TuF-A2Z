class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I']=1; mp['V']=5; mp['X']=10; mp['L']=50; mp['C']=100; mp['D']=500; mp['M']=1000; 
        int ans = 0;
        for(int i = 0;i<s.size();i++) {
           if (i!=s.size()-1) {
            if (s[i]=='I' && s[i+1]=='V') { ans+= 4; i++; }
            else if (s[i]=='I' && s[i+1]=='X') {ans+= 9; i++; }
            else if (s[i]=='X' && s[i+1]=='L') {ans+= 40; i++; }
            else if (s[i]=='X' && s[i+1]=='C') {ans+= 90; i++; }
            else if (s[i]=='C' && s[i+1]=='D') {ans+= 400; i++; }
            else if (s[i]=='C' && s[i+1]=='M') {ans+= 900; i++; }
            else {ans+=mp[s[i]];}
           } else {ans+=mp[s[i]];}
        }
        return ans;
    }
};
