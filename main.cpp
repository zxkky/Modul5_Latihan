#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1 = Nil, P2 = Nil, P3 = Nil, P4 = Nil, P5 = Nil;
    createList(L);

    // ========================================================
    // Modul 5 - Latihan 5.2
    // ========================================================

    // --------------------------------------------------------
    // Soal No. 2:
    // Mengisi elemen ke dalam list dengan insertFirst:
    // Urutan pemanggilan:
    // P1 = alokasi(2);  insertFirst(L, P1);
    // P2 = alokasi(0);  insertFirst(L, P2);
    // P3 = alokasi(8);  insertFirst(L, P3);
    // P4 = alokasi(12); insertFirst(L, P4);
    // P5 = alokasi(9);  insertFirst(L, P5);
    //
    // Hasil linked list:
    // First -> [9] -> [12] -> [8] -> [0] -> [2] -> Nil
    // --------------------------------------------------------
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Output Gambar 5-2: Menampilkan isi list
    printInfo(L);

    // --------------------------------------------------------
    // Soal No. 3:
    // Mencari elemen dengan info 8 menggunakan fungsi findElm
    // Output Gambar 5-3: "8 ditemukan dalam list"
    // --------------------------------------------------------
    address P_cari = findElm(L, 8);
    if (P_cari != Nil) {
        cout << P_cari->info << " ditemukan dalam list" << endl;
    } else {
        cout << "8 tidak ditemukan dalam list" << endl;
    }

    // --------------------------------------------------------
    // Soal No. 4:
    // Menghitung jumlah total info seluruh elemen dalam list
    // (9 + 12 + 8 + 0 + 2 = 31)
    // Output Gambar 5-4: "Total info dari kelima elemen adalah 31"
    // --------------------------------------------------------
    int total = totalInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}
