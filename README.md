# Modul 5: Singly Linked List (Bagian Kedua) - 5.2 Latihan

Implementasi ADT Singly Linked List dalam C++ untuk praktikum Struktur Data, **Modul 5 (Singly Linked List Bagian Kedua) - Subbab 5.2 Latihan**.

---

## Daftar File

| File | Deskripsi |
|---|---|
| `Singlylist.h` | Header file yang berisi pendefinisian tipe bentukan (`infotype`, `address`, `ElmList`, `List`) dan prototype seluruh fungsi/prosedur. |
| `Singlylist.cpp` | Implementasi dari seluruh fungsi dan prosedur ADT Singly Linked List. |
| `main.cpp` | Program utama (*driver*) untuk menjalankan dan menguji Soal No. 2, 3, dan 4. |
| `boolean.h` | Header definisi boolean (`boolean`, `true`, `false`) untuk kompabilitas standar modul praktikum. |

---

## Rincian Pengerjaan Soal 5.2 Latihan

### Soal No. 2: Pembentukan ADT Singly Linked List & Pengisian Data

1. **Definisi Tipe Data**:
   - `infotype`: bertipe `int`
   - `address`: pointer ke `ElmList` (`ElmList*`)
   - `ElmList`: record dengan field `info` (`infotype`) dan `next` (`address`)
   - `List`: record dengan field `First` (`address`)

2. **Primitif yang Dibuat**:
   - `void CreateList(List &L)`: Menginisialisasi list kosong (`L.First = Nil`).
   - `address alokasi(infotype x)`: Mengalokasikan memori untuk elemen baru dengan nilai `x`.
   - `void dealokasi(address &P)`: Membebaskan memori yang digunakan oleh elemen `P`.
   - `void insertFirst(List &L, address P)`: Menyisipkan elemen `P` di awal list.
   - `void printInfo(List L)`: Menampilkan seluruh nilai elemen dalam list.

3. **Pengisian Data (sesuai Gambar 5-1)**:
   Elemen dialokasikan dan dimasukkan berturut-turut dengan `insertFirst`:
   ```cpp
   P1 = alokasi(2);  insertFirst(L, P1);
   P2 = alokasi(0);  insertFirst(L, P2);
   P3 = alokasi(8);  insertFirst(L, P3);
   P4 = alokasi(12); insertFirst(L, P4);
   P5 = alokasi(9);  insertFirst(L, P5);
   ```
   Karena `insertFirst` menempatkan setiap elemen baru di posisi paling depan (`First`), maka urutan elemen dalam list menjadi:
   $$\text{First} \to [9] \to [12] \to [8] \to [0] \to [2] \to \text{Nil}$$

4. **Output Soal No. 2 (Gambar 5-2)**:
   ```
   9 12 8 0 2
   ```

---

### Soal No. 3: Pencarian Elemen dengan Info 8

1. **Spesifikasi Fungsi**:
   ```cpp
   address findElm(List L, infotype x);
   ```
2. **Cara Kerja**:
   - Menelusuri list mulai dari `L.First`.
   - Memeriksa apakah nilai `P->info == x`.
   - Jika ditemukan, mengembalikan alamat/pointer `P`.
   - Jika penelusuran sampai akhir list (`Nil`) tidak menemukan nilai yang cocok, mengembalikan `Nil`.

3. **Pemanggilan & Output Soal No. 3 (Gambar 5-3)**:
   ```cpp
   address P_cari = findElm(L, 8);
   if (P_cari != Nil) {
       cout << P_cari->info << " ditemukan dalam list" << endl;
   }
   ```
   Output:
   ```
   8 ditemukan dalam list
   ```

---

### Soal No. 4: Menghitung Jumlah Total Info Seluruh Elemen

1. **Spesifikasi Fungsi**:
   ```cpp
   int totalInfo(List L);
   ```
2. **Cara Kerja**:
   - Menelusuri list mulai dari elemen pertama hingga elemen terakhir.
   - Menjumlahkan nilai `info` setiap simpul: $9 + 12 + 8 + 0 + 2 = 31$.
   - Mengembalikan nilai total akumulasi.

3. **Pemanggilan & Output Soal No. 4 (Gambar 5-4)**:
   ```cpp
   int total = totalInfo(L);
   cout << "Total info dari kelima elemen adalah " << total << endl;
   ```
   Output:
   ```
   Total info dari kelima elemen adalah 31
   ```

---

## Cara Kompilasi dan Menjalankan

### Melalui Terminal / Command Line (g++)

```bash
cd cpp/pertemuan5
g++ main.cpp Singlylist.cpp -o main.exe
./main.exe
```

### Melalui Code::Blocks IDE

1. Buka Code::Blocks.
2. Buat project baru: **File > New > Project > Console Application > C++**.
3. Tambahkan file `Singlylist.h`, `Singlylist.cpp`, dan `main.cpp` ke dalam project (centang target **Debug** dan **Release**).
4. Tekan **F9** (*Build and Run*).

---

## Hasil Eksekusi Program Lengkap

```
9 12 8 0 2 
8 ditemukan dalam list
Total info dari kelima elemen adalah 31
```
