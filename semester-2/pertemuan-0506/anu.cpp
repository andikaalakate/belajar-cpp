#include <iostream>
using namespace std;

// Struktur untuk node linked list
struct Node
{
    int data; // Data yang disimpan
    Node *next; // Pointer ke node berikutnya
};

// Hapus node di depan
void deleteDepan(Node **head_ref)
{
    if (*head_ref == NULL) // Jika list kosong
    {
        cout << "List kosong, tidak ada yang dihapus" << endl;
        return;
    }

    Node *temp = *head_ref; // Simpan head lama
    *head_ref = (*head_ref)->next; // Ubah head
    delete temp; // Hapus node lama
}

// Hapus node di belakang
void deleteBelakang(Node **head_ref)
{
    if (*head_ref == NULL) // Jika list kosong
    {
        cout << "List kosong, tidak ada yang dihapus" << endl;
        return;
    }

    if ((*head_ref)->next == NULL) // Jika hanya satu node
    {
        delete *head_ref; // Hapus dan set NULL
        *head_ref = NULL;
        return;
    }

    Node *temp = *head_ref; // Cari node sebelum terakhir
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next; // Hapus node terakhir
    temp->next = NULL; // Set next ke NULL
}

// Hapus node di posisi tertentu
void deleteTengah(Node **head_ref, int posisi)
{
    if (*head_ref == NULL) // Jika list kosong
    {
        cout << "List kosong, tidak ada yang dihapus" << endl;
        return;
    }

    if (posisi == 0) // Jika posisi 0, pakai deleteDepan
    {
        deleteDepan(head_ref);
        return;
    }

    Node *temp = *head_ref; // Cari posisi sebelumnya
    for (int i = 0; i < posisi - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) // Jika posisi tidak valid
    {
        cout << "Posisi tidak valid" << endl;
        return;
    }

    Node *nodeHapus = temp->next; // Simpan node yang dihapus
    temp->next = nodeHapus->next; // Sambungkan
    delete nodeHapus; // Hapus node
}
