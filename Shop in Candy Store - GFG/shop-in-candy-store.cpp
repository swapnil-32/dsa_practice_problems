//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        vector<int>ans;
        sort(candies,candies+N);
        int c=0;
        int ans1=0;
        for(int i=0;i<N;i++){
            ans1+=candies[i];
            c+=(1+K);
            if(c>=N){
                break;
            }
        }
        ans.push_back(ans1);
        //sort(candies,candies+N,greater<int>());
        c=0;
        int ans2=0;
        for(int i=N-1;i>=0;i--){
            ans2+=candies[i];
            c+=(1+K);
            if(c>=N){
                break;
            }
        }
        ans.push_back(ans2);
        return ans;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends