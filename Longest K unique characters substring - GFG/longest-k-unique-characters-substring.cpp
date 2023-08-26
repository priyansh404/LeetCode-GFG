//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans=-1;
       int i=0,j=0;
       int temp=0;
       unordered_map<char,int> mp;
       while(j<s.length()){
               mp[s[j]]++;
               j++;
               temp++;
               
         if(mp.size()>k){
             
               while(mp.size()>k){
                   mp[s[i]]--;
                   temp--;
                   if(mp[s[i]]==0)
                     mp.erase(s[i]);
                     i++;
               }
           }
           
         if(mp.size()==k) 
              ans=max(ans,temp) ;
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends