//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    // int convertToINT(string s){
    //     int num = 0;
    //   int n = s.length();
 
    // // Iterate till length of the string
    //     for (int i = 0; i < n; i++){
    //     num = num * 10 + (int(s[i]) - 48);
    //     } 
    // // return the answer
    // return num;
    // }
    /*You are required to complete below function */
    // int multiplyStrings(string s1, string s2) {
       //Your code here
    //   return convertToINT(s1)*convertToINT(s2);
    // }
    string help(string s1, string s2)
    {
        int len1 =s1.size(), len2 = s2.size();
        if(len1==0 || len2==0) return "0";
        
        vector<int> result(len1+len2, 0);
        
        int place1 = 0, place2 = 0;
        
        for(int i=len1-1; i>=0; i--)
        {
            int carry = 0;
            int n1 = s1[i] - '0';
            place2 = 0;
            
            for(int j=len2-1; j>=0; j--)
            {
                int n2 = s2[j] - '0';
                int sum = n1*n2 + result[place1+place2] + carry;
                carry = sum/10;
                result[place1+place2] = sum%10;
                place2++;
            }
            if(carry>0) result[place1+place2] += carry;
            place1++;
        }
        
        int i = result.size()-1; // ignore 0's from the right
        while(i>=0 && result[i] == 0) i--;
        
        if(i == -1) return "0";
        
        string ans = "";
        while(i>=0) ans += std::to_string(result[i--]);
        
        return ans;
    }
    
    string multiplyStrings(string s1, string s2) {
       
        bool sign;
        if( (s1[0] == '-' || s2[0] == '-') && (s1[0] != '-' || s2[0] != '-') )
            sign = false; // minus
        else sign = true; // plus
        
        string ans = "";
        if(!sign) ans = "-";
        
        if(s1[0] == '-') s1 = s1.substr(1);
        if(s2[0] == '-') s2 = s2.substr(1);
        
        ans += help(s1, s2);
        return ans;
       
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends