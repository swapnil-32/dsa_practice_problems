//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    /*You are required to complete this method*/
    static bool compare(val a, val b) 
    {
        return a.first < b.first;
    }
    int maxChainLen(struct val p[],int n){
        //int n=sizeof(p)/sizeof(p[0]);
         sort(p,p+n,compare);
       int m=1;
       int l=p[0].second;
        for(int i=1;i<n;i++){
            if(p[i].first>l){
                m++;
                l=p[i].second;
                //c=max(c,m);
            }
            else if(l>p[i].second){
                l=p[i].second;
            }
            // else{
            //     break;
            // }
        }
        return m;
        //Your code here
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
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends