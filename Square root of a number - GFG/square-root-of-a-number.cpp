//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long ans=-1;
        int l=1;
        int h=x;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long msq=mid*mid;
            if(msq==x){
                return mid;
            }
            else if(msq>x){
                h=mid-1;

            }
            else{
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
        // Your code goes here   
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends