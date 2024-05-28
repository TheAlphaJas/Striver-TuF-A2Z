class Solution {
public:
    string proc(string s) {
        string ret;
        map<char,int> b,id;
        int c = 0;
        for(auto x:s) {if(b[x]==0) {b[x]=1; id[x]=c; c++;} ret+=id[x];}
        return ret;
    }
    bool isIsomorphic(string s, string t) {
        string a,b;
        a = proc(s);
        b = proc(t);
        if (a==b) {return 1;} else {return 0;}
    }
};
