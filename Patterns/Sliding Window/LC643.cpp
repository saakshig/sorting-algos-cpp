class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = -10001.00, windowAvg, windowSum = 0.0;
        int windowStart = 0;

        for(int windowEnd = 0; windowEnd < nums.size(); windowEnd++){
            windowSum += nums[windowEnd];

            if(windowEnd >= k - 1){
                windowAvg = windowSum / k;
                maxAvg = max(maxAvg, windowAvg);
                windowSum -= nums[windowStart++];
            }
        }
        return maxAvg;
    }
};