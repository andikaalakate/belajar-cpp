#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Deklarasi Vector
    vector<string> kendaraan = {"Mobil", "Motor", "Sepeda"};
    
    // Menambah elemen di belakang
    kendaraan.push_back("Truk");
    
    // Mengakses dan mengubah elemen
    kendaraan.at(0) = "Bus";
    
    // Menghapus elemen terakhir
    kendaraan.pop_back();
    
    cout << "Isi Vector saat ini :\n";
    
    for (string k : kendaraan)
    {
        cout << "- " << k << "\n";
    }
    
    cout << "Jumlah elemen : " << kendaraan.size() << endl;
    
    return 0;
}