#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> antreanBank;
    
    // Mendaftarkan data ke dalam antrean
    antreanBank.push("Andi"); // Masuk pertama
    antreanBank.push("Budi");
    antreanBank.push("Citra");
    
    cout << "Orang pertama di antrean : " << antreanBank.front() << endl;
    cout << "Orang terakhir di antrean : " << antreanBank.back() << endl;
    
    // Memanggil/mengeluarkan orang pertama dari antrean
    antreanBank.pop();

    cout << "\nSetelah orang pertama dipanggil..." << endl;
    cout << "Orang pertama sekarang : " << antreanBank.front() << endl;
    cout << "Sisa antrean : " << antreanBank.size() << " orang" << endl;
    
    return 0;
}