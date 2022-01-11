#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int iterative_sol(long n){
     int count =0;
     while(n!=0){
         n=n/10;
         ++count;}
        return count;
     }
int recursive_sol(long n){
    if(n==0){
        return 0;
    }
    return 1+recursive_sol(n/10);
}
int logarithimic_sol(long n){
    return (log10(n)+1);
}


int main(){
 int n;
 cin>>n;
 cout<< iterative_sol(n);
 cout<< recursive_sol(n);
 cout<< logarithimic_sol(n);
 cout<<"hi";
 return 0;}