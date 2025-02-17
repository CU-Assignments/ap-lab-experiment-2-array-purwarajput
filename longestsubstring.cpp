class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
    
            // NAME:PURWA UID:22BCS13241
            
             unordered_map<char, int> charMap;
            int left = 0, maxLength = 0;
    
            for (int right = 0; right < s.length(); ++right) {
                if (charMap.find(s[right]) != charMap.end() && charMap[s[right]] >= left) {
                    left = charMap[s[right]] + 1;
                }
                charMap[s[right]] = right;
    
                maxLength = max(maxLength, right - left + 1);
            }
            
            return maxLength;
        }
    };