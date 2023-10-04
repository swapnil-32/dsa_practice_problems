//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        // int ans=m[str[0]];
        // for(int i=1;i<str.length();i++){
        //     if((str[i]=='V' || str[i]=='X' || str[i]=='L' || str[i]=='C' || str[i]=='D' || str[i]=='M') && str[i-1]=='I'){
        //         ans-=1;
        //         ans+=(m[str[i]]-1);
        //     }
        //      else if((str[i]=='L' ||str[i]=='C' || str[i]=='D' || str[i]=='M' ) && str[i-1]=='X'){
        //         ans-=10;
        //         ans+=(m[str[i]]-10);
        //     }
        //     else if((str[i]=='D' || str[i]=='M' ) && str[i-1]=='C'){
        //         ans-=100;                                                           //this is also correct
        //         ans+=(m[str[i]]-100);
        //     }
        //     else{
        //         ans+=m[str[i]];
        //     }
        // }
        int ans=0;
        for(int i=0; i<str.size(); i++){
            if(i < str.length() - 1 && m[str[i]] < m[str[i+1]]){
                ans -= m[str[i]];
            }else{
                ans +=m[str[i]];
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends