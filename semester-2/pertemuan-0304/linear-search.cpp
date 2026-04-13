#include <iostream>
using namespace std;

// Fungsi untuk melakukan Linear Search
int linearSearch(int arr[], int n, int x)
{
    // Menelusuri array satu per satu dari awal sampai akhir
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i; // Jika ditemukan, kembalikan indeksnya
        }
    }

    return -1; // Jika tidak ditemukan, kembalikan -1
}

int main() {
    int data[] = {34, 12, 55, 90, 23, 17, 88};
    int n = sizeof(data) / sizeof(data[0]);
    int angkaDicari = 90;
    
    cout << "Data array: [";
    for (int num : data) {
        cout << num << " ";
    }
    cout << "]" << endl;

    cout << "Mencari angka " << angkaDicari << " dengan Linear Search..." << endl;
    
    int hasil = linearSearch(data, n, angkaDicari);
    
    if (hasil == -1) {
        cout << "Data tidak ditemukan dalam array." << endl;
    } else {
        cout << "Data ditemukan pada indeks ke-" << hasil << endl;
    }
    return 0;
}
