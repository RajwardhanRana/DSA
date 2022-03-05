class Solution {
public:
   void solve(int n, string &temp){
        if(n == 1)
            return;
        char c = temp[0];
        int count = 1;
        string check = "";
        for(int i = 1; i < temp.length(); ++i){
            if(temp[i] == temp[i-1])
                ++count;
            else{
                check += to_string(count);
                check += c;
                count = 1;
                c = temp[i];
            }
        }
        check += to_string(count);
        check += c;
        temp = check;
        solve(n - 1, temp);
    }
    
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string temp = "1";
        solve(n, temp);
        return temp;
    }
};