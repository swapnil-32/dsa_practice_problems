//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void per(string s,int index,set<string>&ans){
	    if(index==s.length()-1){
	        ans.insert(s);
	        return;
	    }
	    for(int i=index;i<s.length();i++){
	        swap(s[index],s[i]);
	        per(s,index+1,ans);
	        swap(s[index],s[i]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    set<string>ans;
		    vector<string>a;
		    per(S,0,ans);
		    for(auto i:ans){
		        a.push_back(i);
		    }
		    sort(a.begin(),a.end());
	
		    
		    return a;
		    // Code here there
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends