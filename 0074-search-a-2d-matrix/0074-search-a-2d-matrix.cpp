class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;
        bool ans= false;
        while(i<matrix.size() && j<matrix[0].size()){
            if(matrix[i][j]== target){
                ans=true;
                break;
            }
            if(target>matrix[i][j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;

    }
};