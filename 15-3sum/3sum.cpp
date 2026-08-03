class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<nums.size();i++){
            if(i>0 &&nums[i]==nums[i-1]){
                continue;
            }
        int left=i+1;
        int right=nums.size()-1;
        while(left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                          result.push_back({nums[i],nums[left],nums[right]});
                          left++;right--;
                          while(nums[left]==nums[left-1]&&left<right){
                            left++;
                          }
                          while(nums[right]==nums[right+1]&&left<right){
                            right--;
                          }
                }
                else if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }
                 else if(nums[i]+nums[left]+nums[right]<0){
                    left++;
                }
            }
        
    }
    return result;
    }
};