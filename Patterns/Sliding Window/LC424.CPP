class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> charMap;
        int windowStart = 0, size = s.length(), maxCount = 0, maxLen = 0;
        char current;

        for(int windowEnd = 0; windowEnd < size; windowEnd++){
            current = s[windowEnd];
            charMap[current]++;
            maxCount = max(maxCount, charMap[current]);

            if(windowEnd - windowStart + 1 - maxCount > k){
                charMap[s[windowStart]]--;
                windowStart++;
            }
            maxLen = max(maxLen, windowEnd - windowStart + 1);
        }
        return maxLen;
    }
};