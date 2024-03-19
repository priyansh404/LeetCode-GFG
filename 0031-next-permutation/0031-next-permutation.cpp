class Solution {
public:
    void printArr(vector<int> nums){
        for(int i = 0; i<nums.size(); i++){
            cout << nums[i];
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int i = n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        //edge case
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            printArr(nums);
            return;
        }
        for(int i = n-1; i>ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1, nums.end());
        printArr(nums);
    }
};