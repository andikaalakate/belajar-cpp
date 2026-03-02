#include <iostream>
using namespace std;

int main() {
    int p = 10;
    int q = 20;

    bool kondisi1 = (p < q);
    bool kondisi2 = (p > q);

    cout << "--- Operator Logika ---\n";
    cout << endl;

    cout << "Nilai P = " << p << endl;
    cout << "Nilai Q = " << q << endl;
    cout << endl;

    cout << "Kondisi1 (p < q) = " << kondisi1 << endl;
    cout << "Kondisi2 (p > q) = " << kondisi2 << endl;
    
    cout << endl;

    cout << "Kondisi1 AND Kondisi2 = " << (kondisi1 && kondisi2) << endl;
    cout << "Kondisi1 OR Kondisi2  = " << (kondisi1 || kondisi2) << endl;
    cout << "NOT Kondisi1          = " << (!kondisi1) << endl;
    return 0;
}