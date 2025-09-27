#include <iostream>
using namespace std;

//prosedur untuk menghitung jumlah bilangan ganjil dari 1 sampai y
//parameter: *x (pointer untuk menyimpan hasil), y (batas atas)
void jumlahGanjil(int *x, int y) {
   *x = 0; //awalnya hasil dijadikan 0
  
   //loop dari 1 sampai y
   for (int i = 1; i <= y; i++) {
       if (i % 2 != 0) { //jika i ganjil (sisa bagi 2 tidak sama dengan 0)
           *x += i; //tambahkan i ke hasil (*x)
       }
   }
}
int main() {
   int hasil; //variabel untuk menyimpan hasil penjumlahan
   int y; //batas atas
   //minta input batas atas dari pengguna
   cout << "Masukkan nilai y: ";
   cin >> y;
   //panggil prosedur dengan mengirim alamat hasil (&hasil)
   jumlahGanjil(&hasil, y);
  
   //tampilkan hasil penjumlahan
   cout << "Hasil<< " = " << hasil << endl;
   return 0;
}
