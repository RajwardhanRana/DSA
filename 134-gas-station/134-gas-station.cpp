class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
int n = gas.size();
int start = 0;
int bal = 0;
int defi = 0;

    for(int i = 0; i < n; i++)
    {
        bal = bal + gas[i] - cost[i];
        if(bal < 0)
        {
            defi = defi + bal;
            start = i+1;
            bal = 0;
        }
    }
    if(bal + defi>= 0)
    {
        return start;
    }
    else
    {
        return -1;
    }
}
        
    
};