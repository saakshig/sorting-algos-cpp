class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        int nextNonDuplicate = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[nextNonDuplicate - 1] != nums[i]){
                nums[nextNonDuplicate++] = nums[i];
            }
        }
        return nextNonDuplicate;
    }
};