class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int val= target - nums[i];
            if(mp.find(val)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[val]);
               break;
            }
            mp[nums[i]]=i;
        }  
        return ans;  
    }
};