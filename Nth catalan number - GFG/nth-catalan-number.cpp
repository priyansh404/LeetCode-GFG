//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     int catalan(int n , int dp[])
    {
        int mod=1e9+7;
        
        int ans=0;
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        for(int i=0 ; i<n ; i++)
        {
            ans=  (ans+(1LL*(catalan(i,dp))*(catalan(n-i-1,dp)))%mod)%mod;
        }
        
        dp[n]=ans;
        return ans;
    }
    
    
    int findCatalan(int n) 
    {
        //code here
        int dp[n+1];
        for(int i =0 ; i<n+1 ;i++)
        {
            dp[i]=-1;
        }
        dp[0]=dp[1]=1;
        
        return catalan(n,dp);
        }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends