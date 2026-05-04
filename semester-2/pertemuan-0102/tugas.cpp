#include <iostream>
using namespace std;

int main() {

    int tahun[] = {2005, 2021, 1998, 2010, 2023, 1995};
    int n = sizeof(tahun)/sizeof(tahun[0]);

    cout << "Data sebelum sorting: ";
    for(int i = 0; i < n; i++)
        cout << tahun[i] << " ";
    cout << endl;

    // Selection Sort Descending
    for(int i = 0; i < n-1; i++) {

        int max_idx = i;

        for(int j = i+1; j < n; j++) {

            // DIUBAH: operator < menjadi >
            // agar mencari nilai TERBESAR
            if(tahun[j] > tahun[max_idx]) {
                max_idx = j;
            }

        }

        int temp = tahun[max_idx];
        tahun[max_idx] = tahun[i];
        tahun[i] = temp;

    }

    cout << "Data setelah sorting (Descending): ";
    for(int i = 0; i < n; i++)
        cout << tahun[i] << " ";
    cout << endl;

    return 0;
}