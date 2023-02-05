class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max= INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){

                currsum=currsum+ nums[i];
                if(currsum> max){
                    max=currsum;
                }
                if(currsum<0) currsum=0; 


        }

        return max;


    }
};