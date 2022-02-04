#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

bool checkPalindrome(char input[]) {
 int n = strlen(input);
    int i=0;
    int j=n-1;
    if(n==1||n==0){
        return true;
    }
    else{
      while(i<=j){
     if(input[i]!=input[j]){
         return false;
     }
         i++;
          j--;
     }
        return true;
     
    
}

}

