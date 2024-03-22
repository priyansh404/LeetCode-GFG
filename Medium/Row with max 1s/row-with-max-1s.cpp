//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max1 = 0, maxCnt = INT_MIN;
	    for(int i = 0; i < n; i++){
	        int count = 0;
	        for(int j = 0; j < m; j++){
	            if(arr[i][j] == 1){
	                count++;
	            }
	        }
	        if(count > maxCnt){
	            maxCnt = count;
	            max1 = i;
	        }
	    }
	    if(maxCnt == 0){
	        return -1;
	    }
	    return max1;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends