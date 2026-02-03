#include<iostream>

using namespace std;

class Stack{
    private:
        int capacity;
        int* arr;
        int topIndex;

    public:
        Stack(int capacity = 1000) {
            this->capacity = capacity;
            arr = new int[capacity];
            topIndex = -1;
        }

        ~Stack() {
            delete[] arr;
        }

        bool isFull() {
            return topIndex == capacity - 1;
        }

        bool isEmpty() {
            return topIndex == -1;
        }

        void push(int x) {
            if (isFull()) {
                cout << "Stack Overflow" << endl;
                return;
            }

            arr[++topIndex] = x;
        }

        int pop() {
            if (isEmpty()) {
                cout << "Stack Underflow" << endl;
                return -1;
            }

            return arr[topIndex--];
        }

        int top() {
            if (isEmpty()) {
                cout << "Stack Underflow" << endl;
                return -1;
            }

            return arr[topIndex];
        }
};

int main() {

    Stack s;

    s.push(1);
    cout << s.top() << endl;

    s.push(2);
    cout << s.top() << endl;

    s.push(3);

    s.push(4);

    s.push(5);

    cout << s.top() << endl;

    cout << s.pop() << endl;

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.pop() << endl;

    return 0;
}