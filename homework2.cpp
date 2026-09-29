#include <iostream>
using namespace std;

const int MaxSize = 10;

class Stack {
private:
    char data[MaxSize];
    int count;

public:
    Stack() {
        count = 0;
    }

    bool IsEmpty() {
        if (count == 0) {
            return true;
        }
    }

    bool IsFull() {
        if (count == MaxSize) {
            return true;
        }
    }

    void Add(char value) {
        if (IsFull()) {
            cout << "Stack is full" << endl;
            return;
        }

        data[count] = value;
        count++;
    }

    void Pop() {
        if (IsEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        count--;
    }

    int GetCount() {
        return count;
    }

    void Clear() {
        count = 0;
    }

    char Top() {
        if (IsEmpty()) {
            cout << "Stack is empty" << endl;
            return '\0';
        }

        return data[count - 1];
    }

    char Print() {
        if (IsEmpty()) {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        else {
            for (int i = 0; i < count; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;

    stack.Add('A');
    stack.Add('B');
    stack.Print();
    stack.Pop();
    stack.Print();
    stack.Clear();
    stack.Print();
}