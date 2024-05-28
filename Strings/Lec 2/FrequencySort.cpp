class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto x:s) {mp[x]++;}
        string ans;
        vector<pair<int,char>> v;
        for(auto x:mp) {
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto x:v) {
            for(int i =0;i<x.first;i++) {ans+=x.second;}
        }
        return ans;
    }
};
