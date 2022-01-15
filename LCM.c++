#include<iostream>
using namespace std;
int naive_sol(int a,int b){
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
   
 
}
int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}
int eff_sol(int a,int b){
    return (a*b)/hcf(a,b);
} 

int main(){
int a,b;
cin>>a>>b;
naive_sol(a,b);
eff_sol(a,b);
cout<<eff_sol(a,b)<<endl;
cout<<naive_sol(a,b);
}