class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;

        int low = 2, mid, high = x/2;
        long int sqr;
        while(low <= high){
            mid = low + (high - low)/2;
            sqr = (long)mid*mid;
            if(sqr == x)
                return mid;
            else if(sqr > x)
                high = mid - 1;
            else if(sqr < x){
                low = mid + 1;
            }
        }
        return high;
    }
};