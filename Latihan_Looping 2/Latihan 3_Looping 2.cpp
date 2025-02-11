#include <iostream>
using namespace std;

int main() {
   char ulangi = 'y';
   int total = 0, bilangan;
   
   while (ulangi == 'y') {
       cout << "Masukan bilangan : ";
       cin >> bilangan;
       total += bilangan;
       
       cout << "Jawab (y/t): ";
       cin >> ulangi;
       
   }
   
   cout << "\n\n--------\n";
   cout << "Perulangan selesai!" << endl;
   cout << "Total bilangan = " << total << endl;
    
    return 0;
}