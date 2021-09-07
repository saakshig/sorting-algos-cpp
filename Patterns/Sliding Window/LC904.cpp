class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> fruitMap;
        int windowStart = 0, max = 0, size = fruits.size(), windowSize;

        for(int windowEnd = 0; windowEnd < size; windowEnd++){
            fruitMap[fruits[windowEnd]]++;

            while(fruitMap.size() > 2){
                fruitMap[fruits[windowStart]]--;

                if(fruitMap[fruits[windowStart]] == 0){
                    fruitMap.erase(fruits[windowStart]);
                }
                windowStart++;
            }
            windowSize = windowEnd - windowStart + 1;
            max = max < windowSize ? windowSize : max;
        }
        return max;
    }
};