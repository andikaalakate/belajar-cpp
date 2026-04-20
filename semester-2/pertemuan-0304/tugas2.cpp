#include <iostream>
using namespace std;

struct ProdukDigital {
    int idProduk;
    string namaProduk;
    float harga;
};

void bubbleSort(ProdukDigital arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j].idProduk > arr[j+1].idProduk) {
                // swap
                ProdukDigital temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(ProdukDigital arr[], int n, int target) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid].idProduk == target) {
            return mid;
        } else if(arr[mid].idProduk < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    ProdukDigital produk[6] = {
        {405, "Produk A", 100.0},
        {102, "Produk B", 200.0},
        {303, "Produk C", 150.0},
        {501, "Produk D", 250.0},
        {204, "Produk E", 300.0},
        {606, "Produk F", 175.0}
    };

    // Urutkan array menggunakan Bubble Sort
    bubbleSort(produk, 6);

    // Tampilkan array terurut
    cout << "Array terurut berdasarkan idProduk:\n";
    for(int i = 0; i < 6; i++) {
        cout << produk[i].idProduk << " - " << produk[i].namaProduk << " - " << produk[i].harga << endl;
    }

    // Minta input idProduk
    int cari;
    cout << "Masukkan idProduk yang ingin dicari: ";
    cin >> cari;

    // Cari menggunakan Binary Search
    int index = binarySearch(produk, 6, cari);
    if(index != -1) {
        cout << "Produk ditemukan: " << produk[index].namaProduk << ", Harga: " << produk[index].harga << endl;
    } else {
        cout << "Produk tidak ditemukan." << endl;
    }

    return 0;
}