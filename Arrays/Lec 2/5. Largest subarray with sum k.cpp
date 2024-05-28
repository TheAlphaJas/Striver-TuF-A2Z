int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int i = 0;
    int j = 0;
    long long int cs = a[0];
    int ml = 0;
    while(i<=j && j<a.size()) {
        //cout<<i<<" "<<j<<" "<<cs<<endl;
        if (cs < k ) {j++;
          if (j < a.size()) {
            cs += a[j];
          } else {break;}
        } else if (cs > k) {
            cs -= a[i];
          i++;
        } else {
       //     cout<<i<<" "<<j<<endl;
          ml = max(ml, j - i + 1);
          if (j+1<a.size()) {j++; cs+=a[j];} else {break;}
        }
    }
    return ml;
}
