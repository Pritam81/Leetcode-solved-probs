class Solution {
public:
    //top-Down dp
    int countUCL(vector<int>& A, vector<int>& B,vector<vector<int>>&dp,int a_size,int b_size,int i,int j){
        if(i>=a_size||j>=b_size)return 0;
        if(dp[i][j]!=INT_MIN)return dp[i][j];
        if(A[i]==B[j])return 1+countUCL(A,B,dp,a_size,b_size,i+1,j+1);
        dp[i][j] = max(countUCL(A,B,dp,a_size,b_size,i+1,j),countUCL(A,B,dp,a_size,b_size,i,j+1));
        return dp[i][j];
    }
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n = A.size(),m = B.size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MIN));
        return countUCL(A,B,dp,n,m,0,0);
    }
};