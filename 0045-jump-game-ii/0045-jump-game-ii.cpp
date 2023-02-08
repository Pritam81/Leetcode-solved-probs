class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jumps=0;
        int current=0;
        int   fartest=0;
        for(int i=0;i<nums.size()-1;i++){
            fartest=max(fartest,nums[i]+i);
            if(current==i){
                current=fartest;
                jumps++;
            }
        }
        return jumps;
    }
};