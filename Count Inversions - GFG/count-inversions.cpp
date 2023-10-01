//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int countandmerge(long long arr[],long long l,long long m,long long e){
        long long n1=m-l+1;
        long long n2=e-m;
        long long left[n1],right[n2];
        for(long long i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(long long i=0;i<n2;i++){
            right[i]=arr[m+1+i];
        }
        long long i=0,j=0,k=l;
        long long ans=0;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                arr[k++]=left[i++];
            }
            else{
                arr[k++]=right[j++];
                ans+=(n1-i);
            }
        }
        while(i<n1){
            arr[k++]=left[i++];
        }
        while(j<n2){
            arr[k++]=right[j++];
        }
        return ans;
    }
    long long inversion(long long arr[],long long l,long long e){
        long long ans=0;
        if(l<e){
            long long m=l+(e-l)/2;
            ans+=inversion(arr,l,m);
            ans+=inversion(arr,m+1,e);
            ans+=countandmerge(arr,l,m,e);
        }
        return ans;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        return inversion(arr,0,N-1);
        // Your Code Here
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends