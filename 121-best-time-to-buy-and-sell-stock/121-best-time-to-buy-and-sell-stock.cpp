class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r=999999;
        int a=0;
        for(int i=0;i<prices.size();i++){
         if(prices[i]<r)
                r=prices[i];
            else
                a=max(a,prices[i]-r);
        }
        return a;
        }
};
   