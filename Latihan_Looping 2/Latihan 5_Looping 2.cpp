#include <iostream>
using namespace std;

int main() {
  
   for(int i = 1; i<=100; i++){
       if(i%2 !=0 && i%7 && i%11 !=0){
           cout<<i<<" ";
       }
   }
   return 0;
}

