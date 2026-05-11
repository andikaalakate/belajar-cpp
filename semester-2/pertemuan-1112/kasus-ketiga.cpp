#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> inventory = {"Laptop", "Mouse", "Keyboard", "Monitor"};

    cout << "Daftar inventaris:" << endl;
    for (const auto &item : inventory) {
        cout << item << endl;
    }

    // Akses aman menggunakan at() untuk indeks ke-2
    cout << "\nBarang di indeks ke-2: " << inventory.at(2) << endl;

    return 0;
}
