#include <iostream>
using namespace std;

// Struktur untuk node linked list
struct Node
{
    int data; // Data yang disimpan
    Node *next; // Pointer ke node berikutnya
};

// Tambah node di depan
void insertDepan(Node **head_ref, int dataBaru)
{
    Node *nodeBaru = new Node(); // Buat node baru
    nodeBaru->data = dataBaru; // Isi data
    nodeBaru->next = (*head_ref); // Hubungkan ke head lama
    (*head_ref) = nodeBaru; // Jadikan head baru
}

// Tambah node di belakang
void insertBelakang(Node **head_ref, int dataBaru)
{
    Node *nodeBaru = new Node(); // Buat node baru
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL; // Next-nya NULL karena di akhir

    if (*head_ref == NULL) // Jika list kosong
    {
        *head_ref = nodeBaru; // Jadikan head
        return;
    }

    Node *terakhir = *head_ref; // Cari node terakhir
    while (terakhir->next != NULL)
    {
        terakhir = terakhir->next;
    }
    terakhir->next = nodeBaru; // Sambungkan node baru
}

// Tambah node di posisi tertentu
void insertTengah(Node **head_ref, int dataBaru, int posisi)
{
    if (posisi == 0) // Jika posisi 0, pakai insertDepan
    {
        insertDepan(head_ref, dataBaru);
        return;
    }

    Node *nodeBaru = new Node(); // Buat node baru
    nodeBaru->data = dataBaru;

    Node *temp = *head_ref; // Cari posisi sebelumnya
    for (int i = 0; i < posisi - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL) // Jika posisi tidak valid
    {
        cout << "Posisi tidak valid" << endl;
        delete nodeBaru;
        return;
    }

    nodeBaru->next = temp->next; // Sisipkan node baru
    temp->next = nodeBaru;
}

// Hapus node berdasarkan nilai
void hapusNode(Node **head_ref, int nilai)
{
    if (*head_ref == NULL) // Jika list kosong
    {
        cout << "List kosong, tidak ada yang dihapus" << endl;
        return;
    }

    Node *temp = *head_ref;
    Node *prev = NULL;

    // Jika node yang dihapus adalah head
    if (temp != NULL && temp->data == nilai)
    {
        *head_ref = temp->next; // Ubah head
        delete temp; // Hapus node
        return;
    }

    // Cari node dengan nilai yang dicari
    while (temp != NULL && temp->data != nilai)
    {
        prev = temp;
        temp = temp->next;
    }

    // Jika nilai tidak ditemukan
    if (temp == NULL)
    {
        cout << "Nilai " << nilai << " tidak ditemukan" << endl;
        return;
    }

    // Hapus node
    prev->next = temp->next;
    delete temp;
}

// Cari node berdasarkan nilai
void cariNode(Node* head, int nilai)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == nilai)
        {
            cout << "Node dengan nilai " << nilai << " ditemukan" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Node dengan nilai " << nilai << " tidak ditemukan" << endl;
}

// Cetak isi linked list
void cetakList(Node *node)
{
    int count = 0; // Hitung total node
    while (node != NULL) // Loop sampai akhir
    {
        cout << node->data << " -> ";
        node = node->next;
        count++; // Increment counter
    }
    cout << "NULL" << endl; // Tandai akhir
    cout << "Total node: " << count << endl; // Tampilkan total node
}

int main()
{
    Node *head = NULL; // List kosong

    // Tambah di depan
    insertDepan(&head, 30);
    insertDepan(&head, 15);
    insertDepan(&head, 10);
    cout << "Setelah insert depan: ";
    cetakList(head);

    // Tambah di belakang
    insertBelakang(&head, 5);
    cout << "Setelah insert belakang: ";
    cetakList(head);

    // Hapus berdasarkan nilai
    hapusNode(&head, 30);
    cout << "Setelah delete nilai 30: ";
    cetakList(head);

    // Tambah di tengah
    insertTengah(&head, 25, 2);
    cout << "Setelah insert tengah di posisi 2: ";
    cetakList(head);

    // Cari node berdasarkan input user
    int cari;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> cari;
    cariNode(head, cari);

    return 0;
}