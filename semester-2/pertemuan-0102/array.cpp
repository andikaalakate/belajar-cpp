#include <iostream>
using namespace std;

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Mencetak semua elemen array menggunakan perulangan
    cout << "Daftar semua nilai: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Mencetak indeks 1, 2, 4, 6 dengan looping
    cout << "Nilai pada indeks 1, 2, 4, 6: ";
    for(int i = 0; i < n; i++) {
        if(i == 1 || i == 2 || i == 4 || i == 6) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}