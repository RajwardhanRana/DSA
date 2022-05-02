class Solution {
public:
    int reverse(int x) {
        
//     long r = 0;
//     while (x > 0) {
//         r = r* 10 + x % 10;
//         x = x / 10;
//     }
//      if(r>INT_MAX || r< INT_MIN){
//     return 0;}
//     else{ 
//         return r;}
// }
             long rev=0;
   
    
    long copy=x;
    while(copy)
    {
        rev=rev*10+copy%10;
        copy/=10;
    }
    if(rev>INT_MAX || rev < INT_MIN)
    return 0;
    else 
        return rev;}
    
};