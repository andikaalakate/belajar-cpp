#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> line;

    // Skenario antrean mobil
    line.push("Avanza");
    line.push("Xenia");
    line.push("Brio");

    cout << "Antrian awal:" << endl;
    queue<string> temp = line;
    while (!temp.empty()) {
        cout << temp.front() << endl;
        temp.pop();
    }

    // Mobil Avanza selesai dicuci dan keluar dari sistem
    cout << "\nMobil selesai dicuci: " << line.front() << endl;
    line.pop();

    // Mobil berikutnya yang akan dicuci
    if (!line.empty()) {
        cout << "Selanjutnya dicuci: " << line.front() << endl;
    }

    cout << "Sisa antrean: " << line.size() << endl;
    return 0;
}
