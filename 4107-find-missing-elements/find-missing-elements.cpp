class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>result;

        sort(nums.begin(),nums.end());
            if(nums.size()<2)return {};
                
        for(int i=0;i+1<nums.size();i++){
             int currnum=nums[i];
             int nextnum=nums[i+1];
        
           
             if(currnum+1<nextnum){
                for(int missing=currnum+1;missing<nextnum;missing++){
                result.push_back(currnum+1);
                currnum=currnum+1;
                }
             }
             

        }
       return result;
    }
};