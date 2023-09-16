//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        int psum=0;
        int ssum=0;
        int i=0;
        int j=0;
        for(int k=0;k<matrix[0].size();k++){
            psum+=matrix[i][j];
            i++;
            j++;
        }
        i=0;
        j=matrix[0].size()-1;
        for(int k=0;k<matrix[0].size();k++){
            ssum+=matrix[i][j];
            i++;
            j--;
        }
            return psum+ssum;
        // Code here
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.DiagonalSum(matrix);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends