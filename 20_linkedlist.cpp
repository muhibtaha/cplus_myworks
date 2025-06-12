#include <iostream>
using namespace std;

// Tek düğüm yapısı
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Linked List sınıfı
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Listenin başına eleman ekle
    void insertFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Listenin sonuna eleman ekle
    void insertBack(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    // Eleman sil
    void deleteValue(int val) {
        if (!head) return;

        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != val)
            temp = temp->next;

        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }

    // Listeyi yazdır
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor - hafızayı temizle
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    LinkedList list;

    list.insertBack(10);
    list.insertBack(20);
    list.insertFront(5);
    list.insertBack(30);

    cout << "Liste: ";
    list.printList();

    cout << "20 siliniyor..." << endl;
    list.deleteValue(20);
    list.printList();

    return 0;
}

