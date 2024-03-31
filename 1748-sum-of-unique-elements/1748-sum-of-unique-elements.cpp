class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second == 1){
                sum += i.first;
            }
        }
        return sum;
    }
};
