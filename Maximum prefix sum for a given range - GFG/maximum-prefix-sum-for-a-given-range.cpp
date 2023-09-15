//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
          vector<int>v;
       int count=0;
       while(count<Q){
           int ans=INT_MIN;
           int sum=0;
           for(int i=L[count];i<=R[count];i++){
               sum=sum+a[i];
               ans=max(ans,sum);
           }
           v.push_back(ans);
           count++;
       }
       return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n], L[q], R[q];
        
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < q; i++) cin >> L[i] >> R[i];
        Solution obj;
        vector<int> ans = obj.maxPrefixes(a, L, R, n, q);
        for (auto it : ans) 
            cout << it << " ";
        cout << endl;
    }
}

// } Driver Code Ends