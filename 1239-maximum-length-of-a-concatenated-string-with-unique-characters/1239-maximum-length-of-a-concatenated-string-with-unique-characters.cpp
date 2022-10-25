class Solution {
public:
    
   void func(int ind,vector<int>alpha,vector<string>& arr,int curlen,int& maxlen){
       if(ind<0){
           maxlen=max(maxlen,curlen);
           return;
       }
       int n=arr[ind].size();
       int flag =0;
       vector<int>t=alpha;
       for(int i=0;i<n;i++){
           char ch=arr[ind][i];
           if(t[ch-'a']==1){
               flag=1;
               break;
           }
           t[ch-'a']=1;
       }
       if(flag==0){
           func(ind-1,t,arr,curlen+arr[ind].size(),maxlen);
       }
      
       func(ind-1,alpha,arr,curlen,maxlen);
       
       
   }
    int maxLength(vector<string>& arr) {
    int curlen=0;    
        int n=arr.size();
        vector<int>alpha(26,0);       
        int maxlen= 0;
        func(n-1,alpha,arr,curlen,maxlen);
        return maxlen;
    }
};