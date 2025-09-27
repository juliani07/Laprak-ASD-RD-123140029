#include <iostream>
using namespace std;


//prosedur untuk membalik array dengan pointer
void balikArray(int *ptr, int n) {
   int *awal = ptr; //pointer ke elemen pertama
   int *akhir = ptr + n - 1; //pointer ke elemen terakhir
  
   // tukar elemen dari depan dan belakang sampai bertemu di tengah
   while (awal < akhir) {
       int temp = *awal; //simpan nilai sementara
       *awal = *akhir; //pindahkan nilai belakang ke depan
       *akhir = temp; //pindahkan nilai depan ke belakang
       awal++; //geser pointer awal ke kanan
       akhir--; //geser pointer akhir ke kiri
   }
}


int main() {
   int n;
   cout << "input n= ";
   cin >> n;
  
   int arr[n];
   int *ptr = arr; //pointer ke array
  
   //input elemen array
   cout << "Masukkan " << n << " elemen array: ";
   for (int i = 0; i < n; i++) {
       cin >> *(ptr + i); //akses array via pointer
   }
   //tampilkan array sebelum dibalik
   cout << "Array sebelum dibalik: ";
   for (int i = 0; i < n; i++) {
       cout << *(ptr + i) << " ";
   }
   cout << endl;
   //panggil prosedur untuk membalik array
   balikArray(ptr, n);
   //tampilkan array setelah dibalik
   cout << "Array sesudah dibalik: ";
   for (int i = 0; i < n; i++) {
       cout << *(ptr + i) << " ";
   }
   cout << endl;
  
   return 0;
}
