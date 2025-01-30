#include <iostream>
using namespace std;

int main(){
    int n, fn1 = 0, fn2 = 1, angka_berikutnya = 0;
 
    cout << "Masukan Jumlah deret fibonacci : ";
    cin >> n; 
 
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << fn1 << " ";
            continue;
        }
        if(i == 2) {
            cout << fn2 << " ";
            continue;
        }
        angka_berikutnya = fn1 + fn2;
        fn1 = fn2;
        fn2 = angka_berikutnya;
         
        cout << angka_berikutnya << " ";
    }
   
  cout << endl;
  return 0;
}




