#include <iostream>
using namespace std;
 
struct array{
    int A[10];
    int length;
    int size;
};
void display(struct array arr){
    int i;
    for(i=0;i<arr.length;i++){     
     cout<<arr.A[i]; }
    
    


}
    
int sort(struct array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
    if(
        arr.A[i]>arr.A[i+1])
        return 0;}
        return 1;
}





 

int main(){
struct array arr1={{1,2,3,4,5,6,7},7,10};
 display(arr1);
 cout<<sort(arr1);
 return 0;

}
