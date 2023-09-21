//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int>ans;
        int l=0;
        int h=n-1;
        int ans1=-1;
        int ans2=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(arr[m]>x){
                h=m-1;
            }
            else if(arr[m]<x){
                l=m+1;
            }
            else{
                // if(m==0 || arr[m-1]!=arr[m]){
                //     ans1=m;
                // }
                // else{
                //     h=m-1;
                // }
                ans1=m;
                h=m-1;
            }
        }
        l=0;
        h=n-1;
         while(l<=h){
            int m=(l+h)/2;
            if(arr[m]>x){
                h=m-1;
            }
            else if(arr[m]<x){
                l=m+1;
            }
            else{
                // if(m==n-1 || arr[m+1]!=arr[m]){
                //     ans.push_back(m);
                //     break;
                // }
                // else{
                //     l=m+1;;
                // }
                ans2=m;
                l=m+1;
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        // code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends