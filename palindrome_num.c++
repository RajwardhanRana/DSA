// same order of digit from both side when n>0,a single digit is always palindrome no.
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int func(int n){
int rev=0;
int temp =n;
while(temp!=0){
    int ld =temp%10;
    rev=rev*10+ld;
    temp =temp/10;}

return(rev);
}




int main(){
    int n;
    cin>>n;
    cout<<func(n);
    if(func(n)==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
        
    }
    
}

