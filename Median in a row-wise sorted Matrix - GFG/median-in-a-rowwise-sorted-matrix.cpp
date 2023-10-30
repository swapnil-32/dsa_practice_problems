//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        int min_val = INT_MAX;
        int max_val = INT_MIN;
        for (int i = 0; i < R; ++i) {
            min_val = min(min_val, matrix[i][0]);       
            max_val = max(max_val, matrix[i][C - 1]);   
            }
        while (min_val < max_val) {
            int mid_val = min_val + (max_val - min_val) / 2;
            int count = 0;
            for (int i = 0; i < R; ++i) {
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid_val) - matrix[i].begin();
            }
            if (count <= (R * C) / 2) {
                min_val = mid_val + 1;
            } 
            else {
                max_val = mid_val;
            }
        }
        return min_val;
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
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends