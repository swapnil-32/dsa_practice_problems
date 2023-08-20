//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   // int c=0;
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]==x){
	   //         //c++;
	   //         while((arr[i]==x)&& i<n){
	   //             c++;
	   //             i++;
	   //         }
	   //         break;
	   //     }
	   // }
	   // return c;
	    int i=0;
	    int j=n-1;
	    int f=-1;
	    while(i<=j){
	        int mid=(i+j)/2;
	        if(arr[mid]==x){
	            f=mid;
	            j=mid-1;
	        }
	        else if(arr[mid]>x){
	            j=mid-1;
	        }
	        else{
	            i=mid+1;
	        }
	    }
	    if(f==-1){
	        return 0;
	    }
	    int l=-1;
	    i=0;
	    j=n-1;
	    while(i<=j){
	        int mid=(i+j)/2;
	        if(arr[mid]==x){
	           
	            l=mid;
	            i=mid+1;
	        }
	        else if(arr[mid]>x){
	            j=mid-1;
	        }
	        else{
	            i=mid+1;
	        }
	    }
	   // cout<<f<<" "<<l;
	    return l-f+1;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends