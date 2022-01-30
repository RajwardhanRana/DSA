class Solution {
   
public:
 vector<vector<int>> generate(int numRows) {
   vector<vector<int>> op;
        if(numRows == 1){
            op.push_back({1});
            return op;
        }
        if(numRows == 2){
            op.push_back({1});
            op.push_back({1,1});
            return op;
        }
        op.push_back({1});
        op.push_back({1,1});
            
        for(int i=2; i<numRows; i++)
        {
            vector<int> x;
            x.push_back(1);
            for(int j=1; j < i; j++)
            {
                x.push_back(op[i-1][j-1] + op[i-1][j]); }
              x.push_back(1);
            
            op.push_back(x);
        }
            return op;
}
};
