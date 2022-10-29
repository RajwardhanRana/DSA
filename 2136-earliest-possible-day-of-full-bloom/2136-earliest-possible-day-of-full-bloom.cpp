class Solution {
public:
  
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
         vector<pair<int, int>>r;
        for (auto i = 0; i < plantTime.size(); ++i)
            r.emplace_back(growTime[i], plantTime[i]);
        
        
        sort(r.rbegin(),r.rend());
        
        int a = 0, b = 0;
        for (auto[g,p] : r) { 
            a = a+p; 
            b = max(b, a + g); 
        }
        
        return b;
    }
};