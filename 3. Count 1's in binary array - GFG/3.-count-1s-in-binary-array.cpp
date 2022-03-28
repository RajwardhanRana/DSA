// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        
        int low = 0; int high = N-1;
    int ei=-1;
    while(high >= low)
    {
        int mid = (high+low)/2;
        if(arr[mid] == 1)
        {
            low = mid+1;
            ei = mid; 
        }
        else{
            high = mid-1;
        }
        
    }
    return ei+1;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends