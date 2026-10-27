
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class QueueLinkedList {
private:
    Node* head;
    Node* tail;
    int sizes;

public:
    QueueLinkedList() {
        head = nullptr;
        tail = nullptr;
        sizes = 0;
    }

    ~QueueLinkedList() {
        while (!empty()) pop();
    }

    bool empty() {            //O(1)
        return head == nullptr;
    }

    void push(int u) {         //O(1)
        Node* newnode = new Node();
        newnode->data = u;
        newnode->next = nullptr;

        if (empty()) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }

        sizes++;
    }

    void pop() {            //O(1)
        if (empty()) {
            cout << "Queue rong!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head == nullptr) {
            tail = nullptr;
        }

        delete temp;
        sizes--;
    }

    int front() {       //O(1)
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }
        return head->data;
    }
    int back() {       //O(1)
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }

        return tail->data;
    }
    int size() {      //O(1)
        return sizes;
    }

    void display() {    //O(n)
        Node* cur = head;

        while (cur != nullptr) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }
};

int main() {
    QueueLinkedList q;

    q.push(1);
    q.push(2);
    q.push(3);
    cout << "front hien tai: " << q.front() << endl;
    cout << "back hien tai: " << q.back() << endl;
    cout << "size: " << q.size() << endl;
    q.display();
    q.pop();
    cout << "front moi: " << q.front() << endl;
    cout << "size moi: " << q.size() << endl;
    return 0;
}
