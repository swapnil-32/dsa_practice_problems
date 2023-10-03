//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        string ans="";
        while(n>26){
            int r=n%26;
            if(r==0){
                ans.push_back('Z');
                 n=n/26-1;
            }
            else{
                char d='A'+r-1;
                ans.push_back(d);
                 n/=26;
            }
       
        }
        ans.push_back('A'+n-1);
        reverse(ans.begin(),ans.end());
        return ans;
        // your code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends