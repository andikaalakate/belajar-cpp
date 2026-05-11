#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> website;
    stack<string> riwayat;
    int pilihan;

    website.push("github.com");
    website.push("w3schools.com");
    website.push("google.com");

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Buka web baru" << endl;
        cout << "2. Back" << endl;
        cout << "3. Lihat semua riwayat" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            if (website.empty()) {
                cout << "Tidak ada web baru untuk dibuka." << endl;
            } else {
                string next = website.top();
                website.pop();
                riwayat.push(next);
                cout << "Membuka web: " << next << endl;
            }
        } else if (pilihan == 2) {
            if (riwayat.size() <= 1) {
                cout << "Tidak bisa back. Tidak ada halaman sebelumnya." << endl;
            } else {
                string current = riwayat.top();
                riwayat.pop();
                website.push(current);
                cout << "Kembali ke: " << riwayat.top() << endl;
            }
        } else if (pilihan == 3) {
            if (riwayat.empty()) {
                cout << "Riwayat kosong." << endl;
            } else {
                cout << "Riwayat (dari terbaru ke terlama):" << endl;
                stack<string> temp = riwayat;
                while (!temp.empty()) {
                    cout << temp.top() << endl;
                    temp.pop();
                }
            }
        } else if (pilihan == 4) {
            break;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }

        if (!riwayat.empty()) {
            cout << "Halaman saat ini: " << riwayat.top() << endl;
        }
    }

    return 0;
}
