//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
        //     vector <int>ans;
        //     ans.push_back(n*pow(d,2));
        //     ans.push_back(n/pow(d,2));
        // //     int m=n;
        // //     int c=0;
        // //     while(c<d){
        // //         c++;
        // //         m*=2;
        // //     }
        // //     ans.push_back(m);
        // //     m=n;
        // //     c=0;
        // //     while(c<d){
        // //  c++;
        // //  m/=2;
        // //     }
        // //     ans.push_back(m);
        //     return ans;
        
            vector<int> ans(2);
            
            d %= 16;
            
            int lrotate = ((n << d) | (n >> (16-d))) & 0xFFFF;
                
            ans[0] = lrotate;
            
            int rrotate = ((n >> d) | (n << (16-d))) & 0xFFFF;

            ans[1] = rrotate;
            return ans;
            //code here.
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends