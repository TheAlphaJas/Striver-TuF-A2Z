class Solution{
public:	
	// Function returns the second
	// largest elements
	int maxe=0;
	int print2largest(int arr[], int n) {
        int largest = -1, secondlargest = -1;
        for(int i=0;i<n;i++) {
            if (arr[i] > largest) {secondlargest = largest; largest = arr[i];}
            else if (arr[i] < largest && arr[i] > secondlargest) {secondlargest=arr[i];}
            else if (arr[i] < secondlargest) {continue;}
        }
        return secondlargest;
	}
};
