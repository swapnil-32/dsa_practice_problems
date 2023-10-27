//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++
void countsort(int arr[],int n,int i){
    int count[10]={0};
    int output[n];
    for(int j=0;j<n;j++){
        count[(arr[j]/i)%10]++;
    }
    for(int j=1;j<10;j++){
        count[j]=count[j]+count[j-1];
    }
    for(int j=n-1;j>=0;j--){
        output[count[(arr[j]/i)%10]-1]=arr[j];
        count[(arr[j]/i)%10]--;
    }
    for(int j=0;j<n;j++){
        arr[j]=output[j];
    }
}
void radixSort(int arr[], int n) 
{ 
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;max/i>0;i=i*10){
        countsort(arr,n,i);
    }
   // code here
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends