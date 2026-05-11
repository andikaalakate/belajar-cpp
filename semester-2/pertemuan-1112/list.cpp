#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> nilai = {80, 90, 85};
    
    // Menambah di depan dan belakang (fitur unggulan List)
    nilai.push_front(100);
    nilai.push_back(75);
    
    // Menghapus elemen pertama
    nilai.pop_front();
    
    cout << "Isi List :\n";
    
    for (int n : nilai)
    {
        cout << n << " ";
    }
    
    cout << "\nElemen pertama : " << nilai.front() << endl;
    cout << "Elemen terakhir : " << nilai.back() << endl;
    
    return 0;
}
