//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++){
	        m[arr[i]]++;
	    }
	    int ans=INT_MAX;
	    int mn=0;
	    for(auto i:m){
	        if(i.second>mn){
	            mn=i.second;
	            ans=i.first;
	        }
	        if(i.second==mn){
	            ans=min(ans,i.first);
	        }
	    }
	    return ans;
	    // code here
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends