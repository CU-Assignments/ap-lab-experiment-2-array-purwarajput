class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 1; //second element
            int j = 0; //first element
    
            // two pointers approach
    
    // NAME: PURWA UID:22BCS13241
    
            // for traversing the array
            while(i<nums.size()) {
                if(nums[i]==nums[j]) {
                    // agar duplicate hai toh aage nikal jao
                    i++;
                }
                else{
                    // agar unique hai toh  move and update its position.
                    j++;
                    nums[j]=nums[i];
                    i++;
                }
            }
            return j+1;
        }
    };