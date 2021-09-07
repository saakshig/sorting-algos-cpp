class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int windowStart = 0, maxLen = 0, size = s.length(), len, previousIndex;
        char current;

        for(int windowEnd = 0; windowEnd < size; windowEnd++){
            current = s[windowEnd];

            if(charMap.find(current) != charMap.end()){
                previousIndex = charMap[current];
                windowStart = windowStart < previousIndex + 1 ? previousIndex + 1 : windowStart;
            }

            len = windowEnd - windowStart + 1;
            maxLen = maxLen < len ? len : maxLen;
            charMap[current] = windowEnd;
        }
        return maxLen;
    }
};