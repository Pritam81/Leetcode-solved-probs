//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        // sort(lines.begin(),lines.end());
        // vector<int> temp;
        // temp.push_back(lines[0][0]);
        // temp.push_back(lines[0][1]);
        // int count=1,sum=1;
        // for(int i=1;i<N;i++){
        //     if(lines[i][0]>=temp[0] && lines[i][0]<=temp[1]){
        //         sum++;
        //         temp[1]=max(temp[1],lines[i][1]);
                
        //     }
        //     else{
                
        //         count=max(sum,count);
        //         sum=1;
        //         temp.push_back(lines[i][0]);
        //         temp.push_back(lines[i][1]);
        //     }
        // }
        
        // return max(count,sum);
        
        map<int,int> mp;
        for(auto it:lines){
            int s=it[0],e=it[1];
            mp[s]++;
            mp[e+1]--;
        }
        int maxi=1,presum=0;
        for(auto it:mp){
            presum=presum+it.second;
            maxi=max(presum,maxi);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends