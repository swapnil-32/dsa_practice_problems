//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        int n=ratings.size();
    vector<int>candi(n,1);
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]){
            candi[i]=candi[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            candi[i]=max(candi[i],candi[i+1]+1);
        }
    }
    int s=0;
    for(int k=0;k<n;k++){
        s+=candi[k];
    }
    return s;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends