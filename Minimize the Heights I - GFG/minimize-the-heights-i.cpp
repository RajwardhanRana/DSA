// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
#include <bits/stdc++.h>
class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int r=arr[0]+k;
        int e =arr[n-1]-k;
        int ans=arr[n-1]-arr[0];
        int minimum,maximum;
        for(int i =1;i<n;i++){
              minimum=min(r,arr[i]-k);
           maximum=max(arr[i-1]+k,e);
           ans=min(ans,maximum-minimum);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends