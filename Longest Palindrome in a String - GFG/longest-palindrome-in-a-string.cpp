// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    
    bool checkPalindrome(string s){
       
       int i=0,j=s.length()-1;
       bool flag = false;
       
       while(i<j && j>0){
           
           if(s[i] == s[j]){
               i++;
               j--;
               flag = true;
           }
           else{
               flag = false;
               break;
           }
           
       }
       return flag;
   } 
   string longestPalin (string S) {
         int n = S.length();
       string max_str;
       for(int i=0;i<n;i++){
           string substr;
           for(int j=i;j<n;j++){
               substr += S[j];
               
               if(checkPalindrome(substr)){
                   if(substr.size() > max_str.size()){
                       max_str = substr;
                   }
               }
           }
       }
       if(checkPalindrome(max_str)){
           return max_str;
           
       }else{
           return max_str = S[0]; //if no two characters are plaindrome the the first character is the largest palindrome
       }
       
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends