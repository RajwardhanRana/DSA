// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
   int c[n + 1] = {0};
   int *r = new int[2];
   for (int i = 0; i < n; i++)
       c[arr[i]]++;

   for (int i = 1; i < n + 1; i++)
       if (c[i] == 0)
           r[1] = i;
       else if(c[i] > 1)
           r[0] = i;
           
   return r;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends