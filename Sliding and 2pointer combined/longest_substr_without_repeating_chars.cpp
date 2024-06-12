class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0) {return 0;}
        int l=0, r=0;
        int n=s.size();
        map<char,int> mp;
        mp[s[0]]++;
        int ans=1;
        while(l<=r && r<n) {
            r++;
            if (r>=n) {break;}
            mp[s[r]]++;
            while((mp.size())!=(r-l+1)) {
                mp[s[l]]--;
                if (mp[s[l]]==0) {mp.erase(s[l]);}
                l++;
            }
            ans = max(ans,(int)mp.size());
        }    
        return ans;
    }
};
