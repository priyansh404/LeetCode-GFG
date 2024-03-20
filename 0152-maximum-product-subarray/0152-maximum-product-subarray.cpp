class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1, maxm = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            product *= nums[i];
            maxm = max(product, maxm);
            if(product == 0){
                product = 1;
            }
        }
        product = 1;
        for(int i = n-1; i >= 0; i--){
            product *= nums[i];
            maxm = max(product, maxm);
            if(product == 0){
                product = 1;
            }
        }
        return maxm;
    }
};