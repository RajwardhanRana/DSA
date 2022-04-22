// { Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	      int count=0;
    int x=0,y=1;
    int flag=0;
    while(y<s.length())
    {
       if(s[x]==s[y])
       {
           x++;
           y++;
       }
       else 
       {
           x=0;
           flag++;
       }
       if(flag==2)
       {
           flag=0;
           y++;
       }
    }
    return x;
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends