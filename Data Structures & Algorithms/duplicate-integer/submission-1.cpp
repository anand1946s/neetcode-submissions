class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int it:nums)st.insert(it);
        if(nums.size()==st.size())
            return false;
        
        return true;
    }
};