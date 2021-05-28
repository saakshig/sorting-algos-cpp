class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> countMap;

        for(int x : nums1){
            if(countMap.find(x) != countMap.end())
                countMap[x]++;
            else
                countMap[x] = 1;
        }

        vector<int> nums;
        for(int x : nums2){
            if(countMap.find(x) != countMap.end() && countMap[x] > 0){
                nums.push_back(x);
                countMap[x]--;
            }
        }
        return nums;
    }
};