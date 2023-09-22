//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]>1){
            h=mid-1;
        }
        else if(a[mid]<1){
            l=mid+1;
        }
        else{
            ans=mid;
            h=mid-1;
        }
    }
    return ans;
        // Your code goes here
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends