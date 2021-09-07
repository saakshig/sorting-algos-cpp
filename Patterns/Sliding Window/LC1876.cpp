//Naive approach
class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() < 3)
            return 0;

        int count = 0;

        for(int i = 0; i < s.length() - 2; i++){
            if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2])
                count++;
        }
        return count;
    }
};

//Sliding window approach
class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char, int> charMap;
        int windowStart = 0, size = s.length(), count = 0, k = 3;
        char current, oldest;

        for(int windowEnd = 0; windowEnd < size; windowEnd++){
            current = s[windowEnd];
            charMap[current]++;

            if(windowEnd >= k - 1){
                if(charMap.size() == k){
                    count++;
                }

                //Slide the window and remove the oldest character from the map which went out of the window
                oldest = s[windowStart];
                charMap[oldest]--;
                if(charMap[oldest] == 0){
                    charMap.erase(oldest);
                }

                windowStart++;
            }
        }
        return count;
    }
};