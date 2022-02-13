class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Set method with O(n) time and O(n) space
        /*set<int> s;
        for(int x : nums){
            if(s.find(x) != s.end())
                s.erase(x);
            else
                s.insert(x);
        }
        return *(s.begin());*/
        
        //Bit manipulation method : XOR 2 same numbers results in 0 leaving the unique number out
        int b = 0;
        for(int x : nums){
            b ^= x;
        }
        return b;
    }
};
