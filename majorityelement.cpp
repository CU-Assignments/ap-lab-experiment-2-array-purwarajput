class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            // NAME: PURWA UID:22BCS13241
            
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
    };