//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<char,int>m;
        while(i<s.length()){
            if(m.size()<=k){
                m[s[i]]++;
                i++;
            }
            if(m.size()==k){
                ans=max(ans,i-j);
            }
            if(m.size()>k){
                m[s[j]]--;
                if(m[s[j]]==0){
                    m.erase(s[j]);
                }
                j++;
            }
        }
        if(ans>0){
            return ans;
        }
        return -1;
    // your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends