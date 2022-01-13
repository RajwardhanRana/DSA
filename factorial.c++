#include<iostream>
using namespace std;
int recursive_sol(long n){
    if(n==0){
        return 1;
    }
    return(n*recursive_sol(n-1));
}
int iterative_sol(long n){
int res =   1;
for(int i=2;i<=n;i++){
    res=res*i;
}

return res;
}
int main(){
    int n;
    cin>>n;
    recursive_sol(n);
    iterative_sol(n);
    cout<<recursive_sol(n)<<endl;
    cout<<iterative_sol(n);
}