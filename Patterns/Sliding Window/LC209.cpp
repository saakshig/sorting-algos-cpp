class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windowStart = 0, windowSum = 0, minLen = 100001, size = nums.size(), len;

        for(int windowEnd = 0; windowEnd < size; windowEnd++){
            windowSum += nums[windowEnd];

            while(windowSum >= target){
                len = windowEnd - windowStart + 1;
                minLen = minLen < len ? minLen : len;
                windowSum -= nums[windowStart++];
            }
        }
        return (minLen != 100001 ? minLen : 0);
    }
};