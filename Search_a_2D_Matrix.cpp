class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix.size();
        for(int i=0;i<size;i++){
            int oneSize = matrix[i].size();
            if(matrix[i][0]<=target && matrix[i][oneSize-1]>=target){
                for(int j = 0;j<oneSize;j++){
                    if(matrix[i][j]==target)return true;
                }
                return false;
            }
        }
        return false;
    }
};