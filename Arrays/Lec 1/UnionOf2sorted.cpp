class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i=0, j=0;
        while(i<n && j<m) {
            if (ans.size()==0) {
                if (arr1[i]<arr2[j]) {ans.push_back(arr1[i]); i++;} else {ans.push_back(arr2[j]); j++;}
            }
            if (arr1[i] < arr2[j]) {if (arr1[i]>ans[ans.size()-1]) {ans.push_back(arr1[i]);} i++; } else {
                if (arr2[j] > ans[ans.size()-1]) {ans.push_back(arr2[j]);} j++; 
            }
        }
        while(i<n) {
                if (arr1[i]>ans[ans.size()-1]) {ans.push_back(arr1[i]);}
                i++;
        }
        while(j<m) {
                if (arr2[j]>ans[ans.size()-1]) {ans.push_back(arr2[j]);}
                j++;
        }
        return ans;
    }
};
