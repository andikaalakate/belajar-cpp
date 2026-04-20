#include <iostream>
using namespace std;

// Struktur Node
struct Node
{
    int data;
    Node *next;
};

// Class Stack menggunakan Linked List
struct Stack
{
    Node *top; // Pointer penanda elemen teratas
public:
    Stack() { top = NULL; }
    void push(int x)
    {
        Node *temp = new Node();
        if (!temp)
        {
            cout << "Heap Overflow! RAM Penuh\n";
            return;
        }
        temp->data = x;
        temp->next = top;
        top = temp;
        cout << x << " berhasil di-push ke Stack\n";
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow! Tumpukan Kosong\n";
            return;
        }
        Node *temp = top;
        top = top->next;
        cout << temp->data << " berhasil di-pop dari Stack\n";
        delete temp; // Membebaskan memori
    }
};

// Fungsi mencetak Linked List
void cetakList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " -> ";
            node = node->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Stack tumpukanKu;
    tumpukanKu.push(11);
    tumpukanKu.push(22);
    tumpukanKu.push(33);

    cout << "Isi Stack: ";
    cetakList(tumpukanKu.top); // Output: 33 -> 22 -> 11 -> NULL
    
    tumpukanKu.pop(); // Mengeluarkan 33
    
    cout << "Isi Stack setelah pop: ";
    cetakList(tumpukanKu.top); // Output: 22 -> 11 -> NULL
    
    return 0;
}