//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>ans;
          int left=0;
        int right;
        int sum=0;
        int j=0;
        // Your code here
        for(int i=0;i<n;i++){
            sum+=arr[i];
            right=i;
            if(sum==s && j<=i)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                return ans;
            }
            else if(sum > s){
                while(sum > s){
                    sum -=arr[j];
                    j++;
                     left=j;
                    if(sum == s && j<=i){
                       ans.push_back(left+1);
                     ans.push_back(right+1);
                        return ans;
                    }
                }
            }
            
        }
        ans.push_back(-1);
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends