class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        map<int,int> mp;
        int l=0,r=0;
        if (N == 0) {return 0;}
        mp[fruits[0]]++;
        int ans=0;
        while(r<N) {
            while(mp.size()>2) {
                mp[fruits[l]]--;
                if (mp[fruits[l]] == 0) {mp.erase(fruits[l]);}
                l++;
            }
            r++;
            if (r>=N) { ans = max(ans,r-l); break;}
            mp[fruits[r]]++;
            if (mp.size() <= 2) {ans = max(ans,r-l+1);}
        }
        return ans;
    }
};
