class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int l=nums.size();
        k = k % l;
        if(k==0)
            return;
		
        reverse(nums.begin(),nums.end()-k);
		
		
        reverse(nums.end()-k,nums.end());
		
		
        reverse(nums.begin(),nums.end());
    }
};