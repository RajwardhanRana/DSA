#include <cstring>
#include<math.h>
#include <iostream>
using namespace std;
int stringToNumber(char input[]) {
    
    static int n = strlen(input);
       
        if(n<=0){          
            return 0;
            
        }
    else{
        int num=input[n-1]-'0';
    
    n--;
        return 10*stringToNumber(input)+num;}
}




int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
