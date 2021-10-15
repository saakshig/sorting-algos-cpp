class Solution {
public:
    bool isHappy(int n) {
        //Using set
        /*set<int> sumSet;
        int sum = 0, rem;

        while(sum != 1) {
            sum = 0;
            while(n > 0) {
                rem = n%10;
                sum = sum + (rem*rem);
                n = n/10;
            }
            if(sumSet.find(sum) != sumSet.end()) {
                return false;
            }
            sumSet.insert(sum);
            n = sum;
        }
        return true;*/

        //Using two pointer
        int slow = n, fast = n;

        do {
            slow = sumOfSquares(slow);
            fast = sumOfSquares(sumOfSquares(fast));
        } while(slow != fast);
        return (slow == 1);
    }

private:
    int sumOfSquares(int n) {
        int sum = 0, rem;
        while(n > 0) {
            rem = n%10;
            sum = sum + (rem*rem);
            n = n/10;
        }
        return sum;
    }
};