class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       string r=s;
        for(int i=0;i<s.size();i++){
            int e = indices[i];
            r[e]=s[i];
            
        }
        return r;
    }
}; 