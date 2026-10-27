
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class StackLinkedList {
private:
    Node* head;
    int sizes;

public:
    StackLinkedList() {
        head = nullptr;
        sizes = 0;
    }

    ~StackLinkedList() {
        while (!empty()) pop();
    }

    bool empty() {
        return head == nullptr;
    }

    void push(int u) {
        Node* newnode = new Node();
        newnode->data = u;
        newnode->next = head;
        head = newnode;
        sizes++;
    }

    void pop() {
        if (empty()) {
            cout << "Stack rong!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
        sizes--;
    }

    int top() {
        if (empty()) {
            cout << "Stack rong!" << endl;
            return -1;
        }

        return head->data;
    }

    int size() {
        return sizes;
    }

    void display() {
        Node* cur = head;

        while (cur != nullptr) {
            cout << cur->data << " ";
            cur = cur->next;
        }

        cout << endl;
    }
};

int main() {
    StackLinkedList s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "top hien tai: " << s.top() << endl;
    cout << "size: " << s.size() << endl;
    s.display();
    s.pop();
    cout << "top moi: " << s.top() << endl;
    cout << "size moi: " << s.size() << endl;
    return 0;
}
