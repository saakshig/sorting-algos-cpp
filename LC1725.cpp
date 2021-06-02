class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count = 0, max = 0, curmax;
        for(int i = 0; i < rectangles.size(); i++){
            curmax = rectangles[i][0] <= rectangles[i][1] ? rectangles[i][0] : rectangles[i][1];

            if(curmax > max){
                max = curmax;
                count = 1;
            }
            else if(curmax == max){
                count++;
            }
        }
        return count;
    }
};