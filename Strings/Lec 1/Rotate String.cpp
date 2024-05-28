class Solution {
public:
    string rots(string s) {
        string b;
        b+=s[s.size()-1];
        for(int i=0;i<s.size()-1;i++) {
            b+=s[i];
        }
        return b;
    }
    bool rotateString(string s, string goal) {
        if (goal.size()!=s.size()) {return 0;}
        //string g = rots(s);
        string g=s;
        for(int i = 0;i<s.size()+1;i++) {
            if (g==goal) {return 1;}
            g = rots(g);
        }
        return 0;
    }
};
