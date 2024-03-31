class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> uniq;
        for(int i = 0; i < arr.size(); i++){
            uniq[arr[i]]++;
        }
        unordered_set<int> st;
        for(auto i:uniq){
            st.insert(i.second);
        }
        return uniq.size() == st.size();
    }
};