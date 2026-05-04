#include <iostream>
#include <string>
using namespace std;

// Konstanta batas maksimal stack
const int MAX_STACK = 3;

// Struktur data Stack
struct Stack {
    string koleksi_buku[MAX_STACK];
    int top;
};

// Fungsi inisialisasi stack (stack kosong)
void initStack(Stack &stk) {
    stk.top = -1;
    cout << "[*] Stack telah diinisialisasi (kosong)" << endl;
}

// Fungsi cek apakah stack penuh
bool isFull(Stack &stk) {
    return stk.top == MAX_STACK - 1;
}

// Fungsi cek apakah stack kosong
bool isEmpty(Stack &stk) {
    return stk.top == -1;
}

// Fungsi PUSH (menambah buku ke tumpukan)
void push(Stack &stk, string buku) {
    if (isFull(stk)) {
        cout << "[!] GAGAL: Stack penuh! Maksimal " << MAX_STACK << " buku." << endl;
        return;
    }
    
    stk.top++;
    stk.koleksi_buku[stk.top] = buku;
    cout << "[+] Berhasil push: \"" << buku << "\" (posisi: " << stk.top << ")" << endl;
}

// Fungsi POP (mengeluarkan buku dari tumpukan)
string pop(Stack &stk) {
    if (isEmpty(stk)) {
        cout << "[!] GAGAL: Stack kosong! Tidak ada buku untuk dikeluarkan." << endl;
        return "";
    }
    
    string buku = stk.koleksi_buku[stk.top];
    stk.top--;
    return buku;
}

// Fungsi untuk melihat buku paling atas (tanpa pop)
string peek(Stack &stk) {
    if (isEmpty(stk)) {
        return "";
    }
    return stk.koleksi_buku[stk.top];
}

// Fungsi untuk menampilkan isi stack
void displayStack(Stack &stk) {
    cout << "\n--- ISI STACK SAAT INI ---" << endl;
    
    if (isEmpty(stk)) {
        cout << "(kosong)" << endl;
    } else {
        for (int i = stk.top; i >= 0; i--) {
            cout << "  [" << i << "] --> " << stk.koleksi_buku[i];
            if (i == stk.top) {
                cout << " <-- TOP (paling atas)";
            }
            cout << endl;
        }
    }
    cout << "Jumlah buku: " << (stk.top + 1) << "/" << MAX_STACK << endl << endl;
}

int main() {
    cout << "==========================================" << endl;
    cout << "  PROGRAM STACK - TUMPUKAN BUKU DI MEJA" << endl;
    cout << "==========================================" << endl << endl;
    
    // Deklarasi dan inisialisasi stack
    Stack stackBuku;
    initStack(stackBuku);
    cout << endl;
    
    // Push 3 judul buku secara berurutan
    cout << "--- MEMASUKKAN BUKU KE STACK ---" << endl;
    push(stackBuku, "Buku A");
    push(stackBuku, "Buku B");
    push(stackBuku, "Buku C");
    
    displayStack(stackBuku);
    
    // Menampilkan buku di paling atas
    cout << "--- CEK BUKU DI PALING ATAS ---" << endl;
    cout << "Buku paling atas adalah: \"" << peek(stackBuku) << "\"" << endl << endl;
    
    // POP satu buku (mengeluarkan buku paling atas)
    cout << "--- MENGELUARKAN SATU BUKU (POP) ---" << endl;
    string bukuDikeluarkan = pop(stackBuku);
    cout << "[-] Berhasil pop: \"" << bukuDikeluarkan << "\"" << endl;
    
    displayStack(stackBuku);
    
    cout << "==========================================" << endl;
    cout << "Penjelasan: Struktur Stack menggunakan" << endl;
    cout << "prinsip LIFO (Last In First Out)." << endl;
    cout << "Buku yang masuk terakhir akan keluar pertama!" << endl;
    cout << "==========================================" << endl;

    return 0;
}
