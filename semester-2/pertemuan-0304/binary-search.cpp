#include <iostream>
using namespace std;

// Fungsi Binary Search
int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Cek apakah data berada di tengah
        if (arr[mid] == x)
        {
            return mid;
        }

        // Jika data lebih besar, abaikan separuh kiri
        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            // Jika data lebih kecil, abaikan separuh kanan
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    // Data HARUS sudah terurut terlebih dahulu
    int dataTerurut[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = sizeof(dataTerurut) / sizeof(dataTerurut[0]);
    int angkaDicari = 77;
    
    cout << "Data array terurut: [";
    for (int num : dataTerurut) {
        cout << num << " ";
    }
    cout << "]" << endl;

    cout << "Mencari angka " << angkaDicari << " dengan Binary Search..." << endl;
    
    int hasil = binarySearch(dataTerurut, 0, n - 1, angkaDicari);
    
    if (hasil == -1) {
        cout << "Data tidak ditemukan dalam array." << endl;
    } else {
        cout << "Data ditemukan pada indeks ke-" << hasil << endl;
    }
    
    return 0;
}