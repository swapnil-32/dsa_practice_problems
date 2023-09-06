//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
 bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
	bool sentencePalindrome(string s) 
	{
	    string tem="";
	    for(int i=0;i<s.length();i++){
	        if(valid(s[i])){
	            tem+=s[i];
	        }
	    }
	    int i=0;
	    int j=tem.length()-1;
	    while(i<=j){
	        if(tem[i]!=tem[j]){
	            return false;
	        }
	        i++;
	        j--;
	    }
	    return true;
	    // code here 
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends