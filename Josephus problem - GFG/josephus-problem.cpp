//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int jos(int n,int k){
        if(n==1){
            return 0;
        }
        // int a=
        return (josephus(n-1,k)+k-1)%n;
        
    }
    int josephus(int n, int k)
    {
        int ans=jos(n,k);
        // cout<<ans;
        return ans+1;
       //Your code here
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends