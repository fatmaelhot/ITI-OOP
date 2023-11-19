#include <iostream>
using namespace std;

#define SIZE 101

template <typename T>
class Stack
{
private:
    T arr[SIZE];
    int top;

public:
    // constructor
    Stack()
    {
        top = -1;
    }

    void Push(T x)
    {
        if (top == SIZE - 1)
        {
            cout << "Error: Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void Pop()
    {
        if (top == -1)
        {
            cout << "Error: Stack Underflow" << endl;
            return;
        }
        top--;
    }

    T Top()
    {
        return arr[top];
    }

    bool IsEmpty()
    {
        return top == -1;
    }

    void Print()
    {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> S; // You can change the type of the stack elements by changing the template parameter
    Stack<char> S1;

    S.Pop(); S.Print(); // Empty
    S.Push(1); S.Print();
    S.Push(5); S.Print();
    S.Push(6); S.Print();
    S.Pop(); S.Print(); // 1
    S.Pop(); S.Print(); // 5
    S.Push(7); S.Print();
    S1.Push('d');S1.Print();
    S.Pop(); S.Print(); // 6
    S.Pop(); S.Print(); // 7
    S.Pop(); S.Print(); // Empty
    S.Push(7); S.Print();
   // S1.Pop();S1.Print();
    S.Pop(); S.Print(); // 7

    return 0;
}
