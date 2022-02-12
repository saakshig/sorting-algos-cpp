class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            /*
            //Approach 1 : Right shifting and anding with 1 to see if the last bit is 1
            if(n & 1){
                count++;
            }
            n = n >> 1;
            */
            
            //Approach 2 : n & n-1
            count++;
            n = n & (n-1);
        }
        return count;
    }
};
