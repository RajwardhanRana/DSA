class Solution {
public:
    void solve(string m[],vector<string>& result,string temp,int index,string digits){
        if(index>=digits.length()){
            result.push_back(temp);
            return;
        }
        // cout << index << " " << digits[index] << " ";
        int nm=digits[index]-'0';
        string value = m[nm];
        for(int i=0;i<value.length();i++){
            cout << value[i] << " ";
            temp.push_back(value[i]);
            solve(m,result,temp,index+1,digits);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits){
        vector<string>result;
        if(digits.length()==0){
            return result;
        }
        
        int index=0;
        string temp;
        string m[10]={"","","abc","def","ghi","jkl","mno","pqrs",
                        "tuv","wxyz"};
        solve(m,result,temp,index,digits);
        return result;
    }
};