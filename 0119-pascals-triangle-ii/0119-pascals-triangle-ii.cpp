class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans;
        ans.push_back(1);
        long long res = 1;
        for(int i = 1; i<n+1; i++){
            res *= n+1-i;
            res /= i;
            ans.push_back(res);
        }
    return ans;
}
};