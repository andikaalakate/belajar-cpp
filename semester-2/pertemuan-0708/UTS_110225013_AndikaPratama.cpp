#include <iostream>
#include <string>
using namespace std;

// Fungsi Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return indeks jika ditemukan
        }
    }
    return -1; // Return -1 jika tidak ditemukan
}

// ========== IMPLEMENTASI STACK BERBASIS ARRAY ==========
#define MAX_STACK 3

// Struktur untuk Stack
struct Stack {
    string data[MAX_STACK];
    int top;
};

// Fungsi untuk inisialisasi Stack
void initStack(Stack &s) {
    s.top = -1;
}

// Fungsi PUSH: memasukkan data ke dalam Stack
void push(Stack &s, string buku) {
    if (s.top < MAX_STACK - 1) {
        s.top++;
        s.data[s.top] = buku;
        cout << "\"" << buku << "\" berhasil ditambahkan ke Stack." << endl;
    } else {
        cout << "Stack penuh! Tidak bisa menambah data." << endl;
    }
}

// Fungsi POP: mengeluarkan elemen teratas dari Stack
string pop(Stack &s) {
    if (s.top >= 0) {
        string buku = s.data[s.top];
        s.top--;
        return buku;
    }
    return "Stack kosong!";
}

int main() {
    // ========== LINEAR SEARCH ==========
    // a. Deklarasi array berisi 5 elemen dengan nilai bebas
    int data[] = {85, 70, 90, 75, 100};
    int size = 5;
    int nilai_cari;
    
    // Input dari user
    cout << "=== PENCARIAN DATA (LINEAR SEARCH) ===" << endl;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> nilai_cari;
    cin.ignore(); // Membersihkan buffer untuk input string berikutnya

    // b. Implementasi Linear Search
    int hasil = linearSearch(data, size, nilai_cari);

    // c. Tampilkan hasil pencarian
    if (hasil != -1) {
        cout << "Data ditemukan pada indeks ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    cout << "\n=== IMPLEMENTASI STACK BUKU ===" << endl;
    
    // ========== IMPLEMENTASI STACK ==========
    Stack bukuStack;
    initStack(bukuStack);
    
    // c. Masukkan tiga judul buku ke dalam Stack
    push(bukuStack, "Buku A");
    push(bukuStack, "Buku B");
    push(bukuStack, "Buku C");
    
    // d. POP satu kali dan cetak buku yang dikeluarkan
    cout << "\nMengeluarkan elemen teratas dari Stack..." << endl;
    string bukuDikeluarkan = pop(bukuStack);
    cout << "Buku yang dikeluarkan: \"" << bukuDikeluarkan << "\"" << endl;

    return 0;
}
