#include <iostream>
using namespace std;

//struktur node sederhana
struct Node {
    int nilai;      //data yang disimpan
    Node* next;     //penunjuk ke data berikutnya
};

Node* head = NULL;  //awal list (masih kosong)

//fungsi untuk menambah data biar tetap urut kecil ke besar
void tambahTerurut(int nilaiBaru) {
    Node* baru = new Node;     //buat node baru
    baru->nilai = nilaiBaru;   //isi nilai
    baru->next = NULL;         //belum nyambung ke mana-mana

    //kalau list kosong atau nilai baru lebih kecil dari nilai pertama
    if (head == NULL || nilaiBaru < head->nilai) {
        baru->next = head;     //node baru jadi paling depan
        head = baru;
    } else {
        Node* bantu = head;
        //cari posisi yang tepat buat disisipin
        while (bantu->next != NULL && bantu->next->nilai < nilaiBaru) {
            bantu = bantu->next;
        }
        //sambungkan node baru di posisi yang pas
        baru->next = bantu->next;
        bantu->next = baru;
    }
    cout << "Data " << nilaiBaru << " berhasil dimasukkan secara urut!\n";
}

//fungsi untuk menampilkan isi list
void tampilData() {
    if (head == NULL) {
        cout << "Belum ada data!\n";
    } else {
        Node* bantu = head;
        cout << "\nData (Ascending): ";
        while (bantu != NULL) {
            cout << bantu->nilai << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
}

int main() {
    int nilai;
    char lanjut;

    do {
        cout << "Masukkan nilai: ";
        cin >> nilai;
        tambahTerurut(nilai);
        tampilData();

        cout << "Tambah lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Program selesai!\n";
    return 0;
}
