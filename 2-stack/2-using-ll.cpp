#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack{
    private:
        Node *head;
        int size;

    public:
        Stack() {
            head = NULL;
            size = 0;
        }

        void push(int data) {
            Node *node = new Node(data);

            node->next = head;
            head = node;

            size++;
        }

        int isEmpty() {
            return size == 0;
        }

        int pop() {
            if (isEmpty()) {
                cout << "Stack Underflow" << endl;
                return -1;
            }

            int data = head->data;

            Node *temp = head;
            head = head->next;
            delete temp;

            size--;

            return data;
        }

        int top() {
            if (isEmpty()) {
                cout << "Stack Underflow" << endl;
                return -1;
            }

            return head->data;
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