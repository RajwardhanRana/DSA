// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
      vector<int> p;
        if(binary_search(arr,arr+n,x)){
        int r= lower_bound(arr,arr+n,x)-arr;
        int h= upper_bound(arr,arr+n,x)-arr-1;
         vector<int> p={r,h};
            return p;
        }
        else{
            vector<int> p={-1,-1};
            return p;
        
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends