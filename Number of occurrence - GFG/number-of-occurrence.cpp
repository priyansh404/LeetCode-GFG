//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstOccurence(int arr[], int n, int x){
	        int s=0, e=n-1;
	        int mid = s+((e-s)/2);
	        int ans = -1;
	        while(s<=e){
	            if(x == arr[mid]){
                    ans = mid;
                    e = mid - 1;
	            }
	            else if(x < arr[mid]){
	                e = mid - 1;
	            }
	            else{
	                s = mid + 1;
	            }
	            mid = s+((e-s)/2);
	        }
	        return ans;
	        
	}
	int lastOccurence(int arr[], int n, int x){
	    int s=0, e=n-1;
	        int mid = s+((e-s)/2);
	        int ans = -1;
	        while(s<=e){
	            if(x == arr[mid]){
                    ans = mid;
                    s = mid + 1;
	            }
	            else if(x < arr[mid]){
	                e = mid - 1;
	            }
	            else{
	                s = mid + 1;
	            }
	            mid = s+((e-s)/2);
	        }
	        return ans;
	}	
	int count(int arr[], int n, int x) {
	    // code here
	    int counting = 0;
	    int FO = firstOccurence(arr, n, x);
	    int LO = lastOccurence(arr, n, x);
	    if(FO == -1 && LO == -1){
	        counting = 0;
	    }
	    else{
	        counting = LO - FO + 1;
	    }
	    return counting;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends