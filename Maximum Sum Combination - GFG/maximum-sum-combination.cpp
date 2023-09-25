//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        vector<int>ans;
        sort(A.begin(),A.end());
        // reverse(A.begin(),A.end());
        sort(B.begin(),B.end());
        // reverse(B.begin(),B.end());
        priority_queue<pair<int,int>> p;
        // if(A[0]<B[0]){
        //     swap(A,B);
        // }
        for(int i=0;i<N;i++){
            int s=A[N-1]+B[i];
            p.push({s,N-1});
            // for(int j=0;j<N;j++){
            //     int s=A[i]+B[j];
            //     if(ans.size()<K){
            //         p.push(s);
            //         ans.push_back(p.top());
            //         p.pop();
            //     }
            //     else{
            //         reverse(ans.begin(),ans.end());
            //         return ans;
            //     }
            // }
        }
        while(!p.empty() && K--){
            int sum=p.top().first;
            int index=p.top().second;
            ans.push_back(sum);
            p.pop();
            p.push({sum-A[index]+A[index-1],index-1});
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
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends