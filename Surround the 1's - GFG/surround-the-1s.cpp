//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int c=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                int ans=0;
                if(i-1>=0){
                    if(matrix[i-1][j]==0){
                        ans++;
                    }
                    if(j+1<m){
                        if(matrix[i-1][j+1]==0){
                        ans++;
                    }
                    }
                    if(j-1>=0){
                        if(matrix[i-1][j-1]==0){
                        ans++;
                    }
                    }
                }
                if(i+1<n){
                    if(matrix[i+1][j]==0){
                        ans++;
                    }
                    if(j-1>=0){
                        if(matrix[i+1][j-1]==0){
                        ans++;
                    }
                    }
                    if(j+1<m){
                        if(matrix[i+1][j+1]==0){
                        ans++;
                    }
                    }
                }
                if(j-1>=0){
                    if(matrix[i][j-1]==0){
                        ans++;
                    }
                }
                if(j+1<m){
                    if(matrix[i][j+1]==0){
                        ans++;
                    }
                }
                if(ans!=0 && ans%2==0){
                    c++;
                }
                }
            }
        }
        return c;
        // Code here
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends