#include<cstring>
#include <iostream>
using namespace std;


int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
void removeConsecutiveDuplicates(char *input){
static int n=strlen(input); 
 static int i=0;
 if(i!=n){
if(input[i]==input[i+1]){
    for(int j=i;j<n-1;j++){
        input[j+1]=input[j+2];
        }
    n--;
    return removeConsecutiveDuplicates(input);
}
else{
    i++;
    return removeConsecutiveDuplicates(input);}}
    else{
        return;
    }
}