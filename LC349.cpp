class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1;

        for(int x : nums1)
            set1.insert(x);

        set<int> set2(nums2.begin(), nums2.end());

        vector<int> nums;
        if(set1.size() > set2.size()){
            for(int x : set2){
                if(set1.count(x))
                    nums.push_back(x);
            }
        }
        else{
            for(int x : set1){
                if(set2.count(x))
                    nums.push_back(x);
            }
        }
        return nums;
    }
};