class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        if(target>nums[nums.size()-1]) return nums.size();
        int low=0,high=nums.size()-1,mid,ans;
        while(low<=high){
            mid=(low+high)/2;
            if(target==nums[mid]){
                return mid;
           }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};