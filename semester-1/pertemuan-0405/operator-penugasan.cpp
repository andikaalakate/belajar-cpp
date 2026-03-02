#include <iostream>
using namespace std;

int main() {
    int x = 10;

    cout << "--- Operator Penugasan (Assignment) ---\n";

    cout << endl;
    
    cout << "Nilai X awal = " << x << endl;
    cout << "Nilai X saat ini = " << x << endl;

    cout << endl;
    
    x += 5;
    cout << "x += 5; => " << x << endl;
    cout << "Nilai X saat ini = " << x << endl;

    cout << endl;

    x -= 3;
    cout << "x -= 3; => " << x << endl;
    cout << "Nilai X saat ini = " << x << endl;

    cout << endl;

    x *= 2;
    cout << "x *= 2; => " << x << endl;
    cout << "Nilai X saat ini = " << x << endl;

    cout << endl;

    x /= 4;
    cout << "x /= 4; => " << x << endl;
    cout << "Nilai X saat ini = " << x << endl;

    cout << endl;

    x %= 4;
    cout << "x %= 4; => " << x << endl;
    cout << "Nilai X saat ini = " << x << endl;

    return 0;
}