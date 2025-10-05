#include <iostream>
using namespace std;

//struktur node (tempat nyimpan data)
struct Node {
    string nama;    //nama siswa
    int nilai;      //nilai siswa
    Node* next;     //penunjuk ke data berikutnya
};

Node* head = NULL;  //awal list (kosong dulu)

//fungsi untuk nambah data di akhir
void tambahData(string nama, int nilai) {
    Node* baru = new Node;   //buat node baru
    baru->nama = nama;       //isi nama
    baru->nilai = nilai;     //isi nilai
    baru->next = NULL;       //belum ada sambungan

    if (head == NULL) {      //kalau list masih kosong
        head = baru;         //node baru jadi data pertama
    } else {
        Node* bantu = head;          //mulai dari awal
        while (bantu->next != NULL)  //cari data terakhir
            bantu = bantu->next;
        bantu->next = baru;          //sambungkan di akhir
    }

    cout << "Data siswa berhasil ditambah!\n";
}

//fungsi untuk menampilkan semua data
void tampilData() {
    if (head == NULL) {
        cout << "Belum ada data!\n";
    } else {
        Node* bantu = head;  //mulai dari data pertama
        cout << "\nDaftar Nilai Siswa:\n";
        while (bantu != NULL) {  //selama masih ada data
            cout << bantu->nama << " - Nilai: " << bantu->nilai << endl;
            bantu = bantu->next; //lanjut ke data berikutnya
        }
    }
}

int main() {
    int pilihan;
    string nama;
    int nilai;

    do {
        cout << "\n=== MENU NILAI SISWA ===\n";
        cout << "1. Tambah Data\n";
        cout << "2. Lihat Semua Data\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan Nama Siswa: ";
            cin >> nama;
            cout << "Masukkan Nilai: ";
            cin >> nilai;
            tambahData(nama, nilai);
        } 
        else if (pilihan == 2) {
            tampilData();
        }

    } while (pilihan != 0);

    cout << "Program selesai!\n";
    return 0;
}
