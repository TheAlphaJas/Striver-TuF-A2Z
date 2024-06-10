class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxe = 0;
        for(auto x:arr) {maxe=max(maxe,x);}
        return maxe;
    }
};
