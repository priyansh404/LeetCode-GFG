//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool find(vector<vector<char>> &grid,string word,int row,int col)
    {
        int n=grid.size(),m=grid[0].size();
        
        vector<pair<int,int>> directions={{-1,0},{0,1},{1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        
        for(int i=0;i<8;i++)
        {
            int idx=0,nrow=row,ncol=col;
            int delrow=directions[i].first;
            int delcol=directions[i].second;
                
            while(nrow>=0 && nrow<n && ncol>=0 && ncol<m && idx<word.size() && grid[nrow][ncol]==word[idx])
            {
                nrow+=delrow;  ncol+=delcol;   
                
                idx++;
            } 
            
            if(word.size()==idx) return true;
        }
        
         return false;    
    }
vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
    
    vector<vector<int>> result;
    
    int n=grid.size(),m=grid[0].size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(grid[i][j]==word[0] && find(grid,word,i,j))
           {
               result.push_back({i,j});
           }
        }
    }
   
    return result;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends