#include <iostream>
using namespace std;

// Fungsi Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Tukar nilai
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Fungsi Binary Search
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int nim[] = {24001, 24005, 24002, 24007, 24003, 24006, 24004};
    int n = sizeof(nim) / sizeof(nim[0]);

    // Sorting dulu
    selectionSort(nim, n);

    cout << "Data NIM setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << nim[i] << " ";
    }
    cout << endl;

    int cari;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> cari;

    int hasil = binarySearch(nim, 0, n - 1, cari);

    if (hasil != -1) {
        cout << "NIM " << cari << " Terdaftar." << endl;
    } else {
        cout << "NIM " << cari << " Tidak Terdaftar." << endl;
    }

    return 0;
}
