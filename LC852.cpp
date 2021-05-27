class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, mid, high = arr.size() - 1;

        while(low <= high) {
            mid = (low + high)/2;
            mid = mid == 0 ? 1 : mid;

            if(arr[mid] > arr[mid - 1] && arr[mid + 1] < arr[mid]){
                break;
            }
            else if(arr[mid] > arr[mid - 1] && arr[mid + 1] > arr[mid]){
                low = mid + 1;
            }
            else if(arr[mid] < arr[mid - 1] && arr[mid + 1] < arr[mid]){
                high = mid - 1;
            }
        }
        return mid;
    }
};