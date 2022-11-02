class Solution {
public:
    bool check(vector<int>& nums) {
        int s = nums.size();
        int i = 0;

        for(int x=0; x<s; x++)
        {   
            if(nums[x] > nums[(x+1)%s])
                i++;
        }
        return (i <= 1);
    }
};