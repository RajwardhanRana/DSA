#include <iostream>
using namespace std;
 int iterative_sol(long n){
     int count =0;
     while(n!=0){
         n=n/10;
         ++count;}
        return count;
     }

 
 int main(){
int n;
cin>>n;
cout<< iterative_sol(n);
return 0;
 }

