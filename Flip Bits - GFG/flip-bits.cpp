//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int maxi=0,initial=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)initial++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                if(cnt>0)
                {
                    cnt--;
                }
                else
                {
                    cnt=0;
                }
            }
            else
            {
                cnt++;
                
            }
            maxi=max(maxi,cnt);
        }
        return initial+maxi;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends