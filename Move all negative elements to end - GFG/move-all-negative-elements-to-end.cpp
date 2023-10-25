//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
         int a[n];
         int i,j=0,c=0;
       
        for(i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                c++;
               a[j]=arr[i];
               j++;
            }
            
            
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                a[c]=arr[i];
                c++;
            }
        }
        for(i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
        // Your code goes here
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
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
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends