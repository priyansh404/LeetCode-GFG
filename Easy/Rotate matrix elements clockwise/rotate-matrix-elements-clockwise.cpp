//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int m, int n, vector<vector<int>> mat) {
        int row = 0, col = 0, prev, curr;
        while(row + 1 < m && col + 1 < n){
            prev = mat[row + 1][col];
            //1st row
            for(int i = col; i < n; i++){
                curr = mat[row][i];
                mat[row][i] = prev;
                prev = curr;
            }
            row++;
            //last col
            for(int i = row; i < m; i++){
                curr = mat[i][n-1];
                mat[i][n-1] = prev;
                prev = curr;
            }
            n--;
            //last row
            for(int i = n-1; i >= col; i--){
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
            m--;
            //first col
            for(int i = m-1; i>=row; i--){
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
            col++;
            
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends