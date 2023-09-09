//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
        vector<int>psmall(n,0),nsmall(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            // if(s.empty()){
            //   psmall[i]=0;
            // }
            // else if(!s.empty() && s.top()<A[i]){
            //     psmall[i]=s.top();
            // }
            // else if(!s.empty() && s.top()>=A[i]){
            //     while(!s.empty() && s.top()>=A[i]){
            //         s.pop();
            //     }
            //     if(s.empty()){
            //         psmall[i]=0;
            //     }
            //     else{
            //         psmall[i]=s.top();
            //     }
            // }
            while(!s.empty() && s.top()>=A[i]){
                    s.pop();
                }
            if(s.empty()){
              psmall[i]=0;
            }
            else{
                psmall[i]=s.top();
            }
            s.push(A[i]);
        }
        // for(int i=0;i<n;i++){
        //     cout<<psmall[i];
        // }
        
        while(!s.empty()){
            s.pop();
        }
        
        for(int i=n-1;i>=0;i--){
            // if(s.empty()){
            //   nsmall[i]=0;
            // }
            //  if(!s.empty() && s.top()<A[i]){
            //     nsmall[i]=s.top();
            // }
            // else if(!s.empty() && s.top()>A[i]){
            //     while(!s.empty() && s.top()>=A[i]){
            //         s.pop();
            //     }
            //     if(s.empty()){
            //         nsmall[i]=0;
            //     }
            //     else{
            //         nsmall[i]=s.top();
            //     }
            // }
            while(!s.empty() && s.top()>=A[i]){
                    s.pop();
                }
            if(s.empty()){
              nsmall[i]=0;
            }
            else{
                nsmall[i]=s.top();
            }
            s.push(A[i]);
        }
        //  for(int i=0;i<n;i++){
        //     cout<<nsmall[i];
        // }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,abs(psmall[i]-nsmall[i]));
        }
        return ans;
      //Your code here
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
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends