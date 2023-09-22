//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0;
    int j=size-1;
    for(int i=1;i<size;i++){
        if(binary_search(arr+i,arr+size,arr[i-1]+n)){
            return true;
        }
    }
    return false;
    //code
    
}