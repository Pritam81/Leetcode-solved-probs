
// class Solution {
    
// public:
//     bool ispalindrome(string tocheck){
//         int i=0;
//         int j=tocheck.length()-1;
//         while(i<=j){
//             if(tocheck[i]==tocheck[j]){
//                 i++;
//                 j--;
//             }
//             else{
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     void solve(string s, string tocheck,int index,int &count){
//         if(index>=s.length()){
//             if(ispalindrome(tocheck)){
//                 if(tocheck.length()>count){
//                     count=tocheck.length();
//                 }
//             }
//             return;
//         }
//         solve(s,tocheck,index+1,count);
//         char ele=s[index];
//         tocheck.push_back(ele);
//         solve(s,tocheck,index+1,count);
        
        
//     }
//     int longestPalindromeSubseq(string s) {
//             string tocheck="";
//             int index=0;
//         int count=0;
//             solve(s,tocheck,index,count);
//             return count;
//         }
// };
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<int> dp(n, 0), dpPrev(n, 0);
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = 1;
            for (int j = i+1; j < n; ++j) {
                if (s[i] == s[j]) {
                    dp[j] = dpPrev[j-1] + 2;
                } else {
                    dp[j] = max(dpPrev[j], dp[j-1]);
                }
            }
            dp.swap(dpPrev);
        }
        return dpPrev[n-1];
    }
};