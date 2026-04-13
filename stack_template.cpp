#include <iostream>
using namespace std;
template <class T>
class Stack
{
   private:
      T arr[7];
      int top;
   public:
      Stack()
      {
         top = -1;
      }
      void push(T val)
      {
         if (top == 8)
         {
            cout << "stack overflow: cannot push" << val << endl;
         }
         else
         {
            arr[++top] = val;
            cout << "popped: " << val << endl;
         }
      }
      T pop()
      {
         if (top == -1)
         {
            cout << "stack underflow: no element is popped" << endl;
            return T();
         }
         else
         {
            cout << "popped: " << arr[top] << endl;
            return arr[top--];
         }
      }
      T peek()
      {
         if (top == -1)
         {
            cout << "stack is empty..." << endl;
            return T();
         }
         else
         {
            return arr[top];
         }
      }
};
int main()
{
    Stack<int> intStack;
    intStack.push(3);
    intStack.push(7);
    cout << "top element in int: " << intStack.peek() << endl;
    intStack.pop();
    intStack.pop();
    intStack.pop();

    cout << endl;

    Stack<float> floatStack;
    floatStack.push(4.67f);
    floatStack.push(8.9f);
    cout << "top element in float: " << floatStack.peek() << endl;
    floatStack.pop();
    floatStack.pop();
    floatStack.pop();

    return 0;
}
