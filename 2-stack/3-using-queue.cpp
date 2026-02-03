#include<iostream>
#include<queue>

using namespace std;

class Stack{
    queue<int> q;

    public:
        void push(int data) {
            int s = q.size();

            q.push(data);

            for(int i = 0; i < s; i++) {
                q.push(q.front());
                q.pop();
            }
        }

        int pop() {
            int data = q.front();

            q.pop();

            return data;
        }

        int top() {
            return q.front();
        }

        bool isEmpty() {
            return q.empty();
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