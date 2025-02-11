#include <iostream>
using namespace std;

int main() {
   int j;
   cout<<"Masukan batas angka : ";
   cin>>j;
   
   for(int i = 1; i<=j; i++){
       if(i%2 !=0 && i%3 !=0){
           cout<<i<<" ";
       }
   }
   cout<<endl;
   return 0;
}

