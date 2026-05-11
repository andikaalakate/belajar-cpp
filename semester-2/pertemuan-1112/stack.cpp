#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> tumpukanBuku;
    
    // Memasukkan data ke dalam tumpukan
    tumpukanBuku.push("Matematika");
    tumpukanBuku.push("Fisika");
    tumpukanBuku.push("Pemrograman"); // Masuk paling akhir
    
    cout << "Buku paling atas : " << tumpukanBuku.top() << endl;
    
    // Mengeluarkan buku paling atas
    tumpukanBuku.pop();
    
    cout << "Buku paling atas sekarang : " << tumpukanBuku.top() << endl;
    
    return 0;
}