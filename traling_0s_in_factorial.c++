#include<iostream>
using namespace std;
int naive_sol(int n){
    int res=0;
    if(n==0){
        return 1;
    }
    for(int i=1;(5*i)<=n;i++){
        
            res++;
        }
    for(int i=1;(25*i)<=n;i++){
        
            res++;
        
        
    }
    return res ;
    }
 

int eff_sol(int n){
    int res=0;
    for (int i = 5;i<=n;i=i*5){
        res=res+n/i;
    }
   return res ;

} 

int main(){
int n;
cin>>n;
naive_sol(n);
eff_sol(n);
cout<<eff_sol(n)<<endl;
cout<<naive_sol(n);
}