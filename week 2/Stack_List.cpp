
#include <iostream>
using namespace std;

class StackList {
private:
    int* a;
    int sizes;
    int capacity;

    void resize(int newcapacity) {
        int* b = new int[newcapacity];

        for (int i = 0; i < sizes; i++) {
            b[i] = a[i];
        }

        delete[] a;
        a = b;
        capacity = newcapacity;
    }

public:
    StackList() {
        sizes = 0;
        capacity = 2;
        a = new int[capacity];
    }

    ~StackList() {
        delete[] a;
    }

    bool empty() {
        return sizes == 0;
    }

    void push(int u) {
        if (sizes == capacity) {
            resize(capacity * 2);
        }

        a[sizes] = u;
        sizes++;
    }

    void pop() {
        if (empty()) {
            cout << "Stack rong!" << endl;
            return;
        }

        sizes--;
    }

    int top() {
        if (empty()) {
            cout << "Stack rong!" << endl;
            return -1;
        }

        return a[sizes - 1];
    }

    int size() {
        return sizes;
    }

    void display() {
        for (int i = sizes - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    StackList s;
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
