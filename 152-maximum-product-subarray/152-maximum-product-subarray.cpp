class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int MAX=1, MIN=1,res= INT_MIN;
		for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                swap(MAX, MIN);
            }
			MAX=max(nums[i],MAX*nums[i]);
            MIN=min(nums[i],MIN*nums[i]);
            res=max(res,MAX);
		}

		return res;
        
        
    }
};


































// int temp1=MAX, temp2=MIN;
// 			MAX=max(temp2*nums[i],max(temp1*nums[i],nums[i]));
// 			MIN=min(temp2*nums[i],min(temp1*nums[i],nums[i]));
// 			res=max(res,MAX);


