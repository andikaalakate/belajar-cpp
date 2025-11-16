#include <iostream>
using namespace std;

int main() {
    int counter = 10;

    cout << "--- Operator Increment/Decrement ---\n";
    cout << endl;

    cout << "Nilai counter awal = " << counter << endl;
    cout << "Nilai counter saat ini = " << counter << endl;
    cout << endl;
    
    cout << "Increment (++) prefix: " << ++counter << endl;
    cout << "Nilai counter saat ini = " << counter << endl;
    cout << endl;
    
    cout << "Increment (++) postfix: " << counter++ << endl;
    cout << "Nilai counter saat ini = " << counter << endl;
    cout << endl;

    cout << "Decrement (--) prefix: " << --counter << endl;
    cout << "Nilai counter saat ini = " << counter << endl;
    cout << endl;

    cout << "Decrement (--) postfix: " << counter-- << endl;
    cout << "Nilai counter saat ini = " << counter << endl;
    
    return 0;
}