#include <iostream>
using namespace std;


//subprogram untuk menghitung nilai *x dan *z dengan pointer
//*x = jumlah kuadrat bilangan (Σ n^2)
//*z = hasil kali bilangan ganjil (∏ (2n - 1))
void operasiMatematika(int *x, int y, long long *z) {
   *x = 0; // nilai awal *x = 0
   *z = 1; // nilai awal *z = 1
   //loop dari 1 sampai y
   for (int n = 1; n <= y; n++) {
       *x += (n * n); //tambahkan kuadrat n ke *x
       *z *= (2 * n - 1); //kalikan bilangan ganjil ke *z
   }
}


int main() {
   int x; //variabel untuk penjumlahan kuadrat
   long long z; //variabel untuk perkalian bilangan ganjil (pakai long long karena besar)
   int y; //batas atas
  
   cout << "Masukkan nilai y: ";
   cin >> y; //input batas atas dari pengguna
  
   //panggil subprogram dengan pointer
   operasiMatematika(&x, y, &z);
  
   //tampilkan hasil
   cout << "Hasil penjumlahan kuadrat dari 1 sampai " << y << " = " << x << endl;
   cout << "Hasil perkalian bilangan ganjil dari 1 sampai " << (2*y - 1) << " = " << z << endl;
  
   return 0;
}
