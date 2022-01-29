class Solution {
public:
    int r=0,h=0;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    r=i;
                    h=j;
                }
            }
        }
          return {r,h};
    }
};