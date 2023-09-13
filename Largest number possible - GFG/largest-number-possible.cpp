//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        if(S==0 && N>1){
            return "-1";
        }
        string ans="";
        for(int i=0;i<N;i++){
            int largedigit=9;
            if(S>largedigit){
                largedigit=9;
            }
            else{
                largedigit=S;
            }
            ans+=to_string(largedigit);
            S-=largedigit;
        }
        if(S>0){
            return "-1";
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends