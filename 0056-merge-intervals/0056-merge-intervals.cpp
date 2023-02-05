class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int >> ans;
    
        sort(intervals.begin(),intervals.end());
        vector<int> temp;
    
        for(int i=0;i<intervals.size();i++){
            if(temp.empty()){
                temp= intervals[i];

            }
            else{
                if(temp[1]>= intervals[i][0]){
                    temp[1]=max(temp[1],intervals[i][1]);
                }
                else{
                    ans.push_back(temp);
                    temp= intervals[i];
                   
                }
            }
        }
        ans.push_back(temp);
       
        return ans;
    }
};
