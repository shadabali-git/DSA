#include <iostream>

class Armstrong{
    
};

int gcd(int a,int b){

   if(b==0){
      return a;
   }
   return gcd(b,a%b); // 20, 28 ) 28 20 28%22  20, 8  20% 8 -> 8,4  8,4 -> 4,0 -> 4 
}
int main(){
    
    return 0;
}