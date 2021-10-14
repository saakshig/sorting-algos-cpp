class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size(), left = 0, right = size - 1, num;
        vector<int> result(size);

        for(int i = size - 1; i >= 0; i--){
            if(abs(nums[left]) < abs(nums[right])){
                num = nums[right];
                right--;
            }
            else {
                num = nums[left];
                left++;
            }
            result[i] = num * num;
        }
        return result;
    }
};