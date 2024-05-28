class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        deque<long long int> d1,d2;
        for(auto x:nums1) {d1.push_back(x);}
        for(auto x:nums2) {d2.push_back(x);}
        vector<long long int> ans;
        while((int)d1.size()>0 && (int)d2.size()>0) {
            if (d1[0]>=d2[0]) {ans.push_back(d2[0]); d2.pop_front();} else {ans.push_back(d1[0]); d1.pop_front();}
        }
        for(auto x:d1) {ans.push_back(x);}
        for(auto x:d2) {ans.push_back(x);}
        nums1.clear();
        for(auto x:ans) {nums1.push_back(x);}

    }
};
