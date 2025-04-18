#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class DynamicMemoryAllocation {
private:
    Node* head;

public:
    // Constructor
    DynamicMemoryAllocation() {
        head = nullptr;
    }

    // Insert 
    void insert_at_beginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning.\n";
    }

    // Search
    bool search(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                cout << "Found " << key << " in the list.\n";
                return true;
            }
            temp = temp->next;
        }
        cout << key << " not found in the list.\n";
        return false;
    }

    // Delete
    void delete_node(int key) {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        // If head node is to be deleted
        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted " << key << " from the list.\n";
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << key << " not found in the list.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted " << key << " from the list.\n";
    }

    // Reverse 
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        cout << "Reversed the linked list.\n";
    }

    // Display 
    void display() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DynamicMemoryAllocation list;
    // Insert 
    list.insert_at_beginning(10);
    list.insert_at_beginning(20);
    list.insert_at_beginning(30);
    list.display();
    // Search 
    list.search(20);
    list.search(40);
    // Delete 
    list.delete_node(20);
//    list.delete_node(10);
    list.display();
    // Reverse 
    list.reverse();
    list.display();

    return 0;
}

		
