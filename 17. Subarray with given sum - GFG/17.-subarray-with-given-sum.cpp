// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        
        long long t=0;
        int k=0;
        int i=0;
        vector<int> m;
        while(i<n){
            if(arr[i]==s){
                m.push_back(i+1);
               m.push_back(i+1);
               return m;
            }
            if(t<s){
                t+=arr[i];
                i++;
            }
            
            if(t>s){
                    t-=arr[k];
                    k++;
            }
            if(t==s){
               
               m.push_back(k+1);
               m.push_back(i);
               return m;
            }

        }
        m.push_back(-1);
        return m;
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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends