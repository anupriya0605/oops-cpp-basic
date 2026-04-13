#include <iostream>
using namespace std;
class Stack
{
    int arr[5];
    int top;
public:
    Stack()
    {
       top = -1;
    }
    void push(int val)
    {
        if (top == 4)
        {
            throw "Stack Overflow Exception!";
        }
        arr[++top] = val;
        cout << "Pushed: " << val << endl;
    }
    void pop()
    {
        if (top == -1)
        {
            throw "Empty Stack Exception!";
        }
        else if (top == 0)
        {
            cout << "Popped: " << arr[top--] << endl;
            throw 0;
        }
        else
        {
            cout << "Popped: " << arr[top--] << endl;
        }
    }
};
int main()
{
    Stack s;
    try {
        try {
            s.push(5);
            s.push(10);
            s.push(15);
            s.push(20);
            s.push(25);
            s.push(30);
        }
        catch (const char* msg)
        {
            cout << "Inner catch: " << msg << endl;
        }
        try {
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            s.pop();
        }
        catch (int)
        {
            cout << "Inner catch: Stack Underflow Exception!" << endl;
        }
        try
        {
            s.pop();
        }
        catch (const char* msg)
        {
            cout << "Inner catch: " << msg << endl;
            throw;
        }
    }
    catch (...)
    {
        cout << "Outer catch: Handling Rethrown Exception!" << endl;
    }

    cout << "Program Ended." << endl;
    return 0;
}
