class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> hashMap;
            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i];
                
                // Name: Purwa UID: 22BCS13241
                
                // check krna h ki kya complement exist krta h yaa nhi
                if (hashMap.find(complement) != hashMap.end()) {
                    return {hashMap[complement], i};
                }
                // add the current number and index
                hashMap[nums[i]] = i;
            }
            // agar koi solution nhi bnta toh return 
            return {};
        }
    };
    