class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> r;
        int s=0;
        r[0]=-1;
        
        for(int i=0 ; i<nums.size() ; i++){
            s += nums[i];
            
            if(k!=0) s %= k;
            
            if(r.find(s) != r.end())
            {
                if(i-r[s] > 1) return true;
            }
            else r[s]=i;         
        }
        return false;
    }
};