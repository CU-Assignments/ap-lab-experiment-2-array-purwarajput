class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            // fast lookup ke liye
    
            // NAME:PURWA UID: 22BCS13241.
            
            unordered_set<int> seen; 
        for (int num : nums) {
            // agr number set mei h toh true
            if (seen.count(num)) { 
                return true;
            }
            // nhi toh insert kro
            seen.insert(num); 
        }
        // no duplicates
        return false; 
        }
    };