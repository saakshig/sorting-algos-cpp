class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*int low = 0, mid, high = numbers.size() - 1;
        while(low <= high){
            mid = (low + high)/2;
            if(numbers[mid] == target)
                break;
            else if(numbers[mid] > target)
                high = mid - 1;
            else if(numbers[mid] < target)
                low = mid + 1;
        }

        low = 0; high = mid == 0 ? 1 : mid;
        vector<int> answer(2, -1);*/
        int low = 0, high = numbers.size() - 1;
        while(low < high){
            if(numbers[low] + numbers[high] == target){
                return {low + 1, high + 1};
            }
            else if(numbers[low] + numbers[high] < target)
                low++;
            else if(numbers[low] + numbers[high] > target)
                high--;
        }
        return {-1, -1};
    }
};