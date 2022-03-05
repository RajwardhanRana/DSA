class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> p;
        if(binary_search(nums.begin(),nums.end(),target)){
        int r= lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int h= upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
         vector<int> p={r,h};
            return p;
        }
        else{
            vector<int> p={-1,-1};
            return p;
        }
    }
};