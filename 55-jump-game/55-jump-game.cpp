class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int range=0;
        for(int i =0;i<n;i++){
            if(range<i)return 0;
            else{
                range=max(range,i+nums[i]);
            }
        }
        
        return 1;
    }
};