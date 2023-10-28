//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
int countsetb(int n){
    if(n==0){
        return 0;
    }
    int c=0;
    while(n){
        if(n&1){
            c++;
        }
        n=n>>1;
    }
    return c;
}
	int is_bleak(int n)
	{
	    int i = n, j = n, left = 0;
	    while (i) {
	        i >>= 1;
	        left++;
	    }
	    for(int i=n-left;i<n;i++){
	        if((i+countsetb(i))==n){
	            return 0;
	        }
	    }
	    return 1;
	    // Code here.
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends