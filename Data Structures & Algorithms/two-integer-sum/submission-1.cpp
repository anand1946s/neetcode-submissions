class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int curr_val = nums[i];
            int sec_num = target - nums[i];

            if(mp.find(sec_num)!=mp.end()){
                return {mp[sec_num], i};
            }

            mp[curr_val] = i;
        }
        return {};
        
    }
};
