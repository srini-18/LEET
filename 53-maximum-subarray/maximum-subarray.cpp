class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=nums[0];
        int maxend=nums[0];

        for(int i=1;i<nums.size();i++){
            maxend=max(nums[i],maxend + nums[i]);
        
        max_so_far=max(max_so_far,maxend);
        
    }
    return max_so_far;
}};