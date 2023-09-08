//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int plarg=-1;
	    int clarg=0;
	    for(int i=1;i<n;i++){
	        if(arr[i]>arr[clarg]){
	            plarg=clarg;
	            clarg=i;
	        }
	        else if(arr[i]!=arr[clarg]){
	            if(plarg==-1 || arr[i]>arr[plarg]){
	                plarg=i;
	            }
	        }
	    }
	    if(plarg==-1){
	        return -1;
	    }
	    return arr[plarg];
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends