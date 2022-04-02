// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { int i =0;
    int j= n-1;
    int gap,mx=0,mn;
    while(i<j){
        mn=min(height[i],height[j]);
        gap=mn*(j-i-1);
        mx=max(mx,gap);
        if(height[i]< height[j]){
            i++;
        }
        else{
            j--;
        }
    }
        return mx;
        
    } 
};



// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends