//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void sub(vector<int>& A,vector<int>output,vector<vector<int> >&ans,int i){
        if(i==A.size()){
            ans.push_back(output);
            return;
        }
        sub(A,output,ans,i+1);
        int a=A[i];
        output.push_back(a);
        sub(A,output,ans,i+1);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>>ans;
        vector<int>output;
        sub(A,output,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
        //code here
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends