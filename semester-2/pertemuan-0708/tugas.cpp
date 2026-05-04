#include <iostream>
using namespace std;

#define MAX_STACK 100

struct Stack {
    int top;
    string data[MAX_STACK];
};

// Inisialisasi
void inisialisasi(Stack &s) {
    s.top = -1;
}

// Cek penuh
bool isFull(Stack s) {
    return s.top == MAX_STACK - 1;
}

// Cek kosong
bool isEmpty(Stack s) {
    return s.top == -1;
}

// Push (ketik kata)
void push(Stack &s, string kata) {
    if (isFull(s)) {
        cout << "Stack Overflow! Tidak bisa menambah kata.\n";
    } else {
        s.top++;
        s.data[s.top] = kata;
        cout << "Kata \"" << kata << "\" berhasil ditambahkan.\n";
    }
}

// Pop (undo)
void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Tidak ada yang bisa di-undo.\n";
    } else {
        cout << "Undo: \"" << s.data[s.top] << "\" dihapus.\n";
        s.top--;
    }
}

// Tampilkan isi stack
void tampilkan(Stack s) {
    if (isEmpty(s)) {
        cout << "Tidak ada kata.\n";
    } else {
        cout << "Isi teks saat ini:\n";
        for (int i = 0; i <= s.top; i++) {
            cout << s.data[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Stack teks;
    inisialisasi(teks);

    int pilihan;
    string kata;

    do {
        cout << "\n=== MENU UNDO TEXT EDITOR ===\n";
        cout << "1. Ketik Kata Baru\n";
        cout << "2. Undo\n";
        cout << "3. Tampilkan Teks\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan kata: ";
                cin >> kata;
                push(teks, kata);
                break;

            case 2:
                pop(teks);
                break;

            case 3:
                tampilkan(teks);
                break;

            case 4:
                cout << "Keluar program.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 4);

    return 0;
}