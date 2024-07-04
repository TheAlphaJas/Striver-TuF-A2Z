class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        int mi = i; int mine = INT_MAX;
        for(int j =i;j<n;j++) {
               if (arr[j] < mine) {mine = arr[j]; mi=j;}
        }
        return mi;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int j=0;j<n;j++) {
           int min_i = select(arr,j,n);
           swap(arr[j],arr[min_i]);
       }
    }
};
