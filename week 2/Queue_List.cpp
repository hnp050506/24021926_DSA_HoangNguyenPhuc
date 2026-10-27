
#include <iostream>
using namespace std;

class QueueList {
private:
    int* a;
    int frontIndex;
    int sizes;
    int capacity;

    void resize(int newcapacity) {
        int* b = new int[newcapacity];

        for (int i = 0; i < sizes; i++) {
            b[i] = a[(frontIndex + i) % capacity];
        }
        delete[] a;
        a = b;
        capacity = newcapacity;
        frontIndex = 0;
    }
public:
    QueueList() {
        capacity = 2;
        a = new int[capacity];
        frontIndex = 0;
        sizes = 0;
    }
    ~QueueList() {
        delete[] a;
    }
    bool empty() {
        return sizes == 0;
    }
    void push(int u) {
        if (sizes == capacity) {
            resize(capacity * 2);
        }
        int rear = (frontIndex + sizes) % capacity;
        a[rear] = u;
        sizes++;
    }
    void pop() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;
        sizes--;
    }
    int front() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }
        return a[frontIndex];
    }
    int back() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }
        int rear = (frontIndex + sizes - 1) % capacity;
        return a[rear];
    }
    int size() {
        return sizes;
    }
    void display() {
        for (int i = 0; i < sizes; i++) {
            cout << a[(frontIndex + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    QueueList q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "front hien tai: " << q.front() << endl;
    cout << "back hien tai: " << q.back() << endl;
    cout << "size: " << q.size() << endl;
    q.display();
    q.pop();
    cout << "front moi: " << q.front() << endl;
    cout << "back moi: " << q.back() << endl;
    cout << "size moi: " << q.size() << endl;

    return 0;
}
