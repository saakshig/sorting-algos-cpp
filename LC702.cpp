/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        if(target < -9999 || target > 9999)
            return -1;

        int low = 0, mid, high = 9999;
        while(low <= high){
            mid = low + (high - low)/2;
            int num = reader.get(mid);

            if(num == target)
                return mid;
            else if(num > target)
                high = mid - 1;
            else if(num < target)
                low = mid + 1;
        }
        return -1;
    }
};