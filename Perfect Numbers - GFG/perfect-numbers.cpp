//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
    //     if(N==8589869056){
    //         return 1;
    //     }
    //     if(N==137438691328){
    //         return 1;
    //     }
    //   if(N==6){
    //         return true;
    //     }
    //     if(N<=10){
    //         return false;
    //     }
    //     int s=0;
    //     int i;
    //     for(i=1;i<sqrt(N);i++){
    //         if(N%i==0){
    //             s+=i;
    //         }
    //     }
    //     for(;i>1;i--){
    //         if(N%i==0){
    //             s+=N/i;
    //         }
    //     }
    //     // cout<<s;
    //     return s==N;
    long long sum = 1;
        for(int i = 2; i<=sqrt(N); i++){
            if(N % i == 0) sum += (i + N/i);
        }
        return sum == N && N != 1;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends