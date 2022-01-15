#include<iostream>
using namespace std;
int naive_sol(int a,int b){
 int res=min(a,b);
 while(res>0){
     if(a%res==0 && b%res==0){
         break ;
     }
     res--;}
     return res;
}
// let b be smaller than a then
// hcf(a,b)=gcd(a-b,b)
int euclidean_algo(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
        return a;
    }


}

int modified_eucli_algo(int a,int b){
    if(b==a){
        return a;
    }
    else{
        return modified_eucli_algo(b,a%b);
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    naive_sol(a,b);
    euclidean_algo(a,b);
    modified_eucli_algo(a,b);
    cout << modified_eucli_algo(a,b); 
    cout << euclidean_algo(a,b);
    cout << naive_sol(a,b);
}