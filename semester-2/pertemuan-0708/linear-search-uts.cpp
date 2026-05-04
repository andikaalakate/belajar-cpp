#include <iostream>
using namespace std;

// Fungsi Linear Search dengan tracking langkah pencarian
int linearSearch(int arr[], int size, int target, int &langkah) {
    langkah = 0;
    
    for (int i = 0; i < size; i++) {
        langkah++;
        cout << "Langkah " << langkah << ": Cek arr[" << i << "] = " << arr[i];
        
        if (arr[i] == target) {
            cout << " --> KETEMU!" << endl;
            return i;
        } else {
            cout << " (tidak cocok)" << endl;
        }
    }
    
    return -1;
}

int main() {
    cout << "========================================" << endl;
    cout << "  PROGRAM PENCARIAN DATA (LINEAR SEARCH)" << endl;
    cout << "========================================" << endl << endl;
    
    // Deklarasi array dengan 5 elemen
    int data[] = {85, 70, 90, 75, 100};
    int ukuran = 5;
    int cari;
    int totalLangkah = 0;
    
    // Tampilkan data yang tersedia
    cout << "DATA YANG TERSEDIA:" << endl;
    cout << "Posisi: ";
    for (int i = 0; i < ukuran; i++) {
        cout << "[" << i << "] ";
    }
    cout << endl;
    
    cout << "Nilai  : ";
    for (int i = 0; i < ukuran; i++) {
        cout << "[" << data[i] << "] ";
    }
    cout << endl << endl;
    
    // Input nilai yang dicari
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> cari;
    
    cout << "\n--- PROSES PENCARIAN ---" << endl;
    
    // Jalankan linear search
    int posisi = linearSearch(data, ukuran, cari, totalLangkah);
    
    // Tampilkan hasil
    cout << "\n========== HASIL PENCARIAN ==========" << endl;
    cout << "Total langkah pencarian: " << totalLangkah << endl;
    
    if (posisi != -1) {
        cout << "STATUS: DITEMUKAN!" << endl;
        cout << "Nilai " << cari << " ditemukan pada indeks ke-" << posisi << endl;
        cout << "Berada di posisi ke-" << (posisi + 1) << " (jika dihitung dari 1)" << endl;
    } else {
        cout << "STATUS: TIDAK DITEMUKAN!" << endl;
        cout << "Nilai " << cari << " tidak ada dalam data yang disediakan." << endl;
    }
    
    cout << "====================================" << endl;

    return 0;
}
