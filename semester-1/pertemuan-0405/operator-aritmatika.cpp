#include <iostream>
using namespace std;

int main() {
    // Operator Aritmatika
    int a, b;
    double c, d;

    a = 10;
    b = 3;
    c = 2.1;
    d = 3.5;

    cout << "--- Operator Aritmatika ---\n";
 
    cout << endl;
    
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << "Nilai c = " << c << endl;
    cout << "Nilai d = " << d << endl;

    cout << endl;
    
    cout << "Hasil a + b = " << a + b << endl;
    cout << "Hasil a - b = " << a - b << endl;
    cout << "Hasil a * b = " << a * b << endl;
    
    cout << endl;
    
    cout << "Hasil a / b = " << a / b << endl; // Hasilnya integer
    cout << "Hasil a / c = " << a / c << endl; // Hasilnya desimal
    cout << "Hasil a / d = " << a / d << endl; // Hasilnya desimal
    cout << "Hasil b / c = " << b / c << endl; // Hasilnya desimal
    cout << "Hasil b / d = " << b / d << endl; // Hasilnya desimal
    
    cout << endl;
    
    cout << "Hasil a % b = " << a % b << endl;
    
    /** cout << "Hasil a % c = " << a % c << endl; <== akan error
        karena ada bilangan desimal, operator modulus itu kedua nilai
        operand harus bertipe data integer
    **/

    cout << endl;
    
    cout << "Hasil c + d = " << c + d << endl;
    cout << "Hasil c - d = " << c - d << endl;
    cout << "Hasil c * d = " << c * d << endl;
    cout << "Hasil c / d = " << c / d << endl;

    return 0;
}