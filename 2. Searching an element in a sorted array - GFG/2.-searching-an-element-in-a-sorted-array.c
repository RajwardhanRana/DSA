// { Driver Code Starts
//Initial Template for C

#include <stdio.h> 


 // } Driver Code Ends
//User function Template for C

int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       
      int start=0,end=N-1;
     int mid= start+(end-start)/2;
      
      while(end>=start)
{
   if(arr[mid]==K){
       return 1;
   }
   else if(arr[mid]<K){
       start=start+1;
   }
   else{
       end=end-1;
   }
    mid= start+(end-start)/2;
}       
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        printf("%d\n", searchInSorted(arr, n, k));

    }

	return 0; 
} 
  // } Driver Code Ends