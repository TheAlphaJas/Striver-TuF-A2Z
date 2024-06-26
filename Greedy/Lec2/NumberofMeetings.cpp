class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        pair<int,int> p[n];
        for(int i=0;i<n;i++) {
            p[i].first = end[i];
            p[i].second = start[i];
        }
        sort(p,p+n);
        int cnt=1;
        int endtime = p[0].first;
        for(int i=1;i<n;i++) {
            if (p[i].second > endtime) {cnt++; endtime = p[i].first;}
        }
        return cnt;
    }
};