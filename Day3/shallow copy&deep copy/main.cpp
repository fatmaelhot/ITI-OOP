#include <iostream>
using namespace std;
#define SIZE 101

class Stack
{
private:
    int arr[SIZE];
    int top;

public:
    // Constructor
    Stack()
    {
        top = -1;
    }

    // Shallow Copy Constructor
    Stack(const Stack& S1) : top(S1.top)
    {
        for (int i = 0; i <= top; i++)
        {
            arr[i] = S1.arr[i];
        }
    }

    // Deep Copy Constructor
    Stack(const Stack& S1) : top(S1.top)
    {
        for (int i = 0; i <= top; i++)
        {
            arr[i] = S1.arr[i];
        }
    }

    void Push(int x)
    {
        if (top == SIZE - 1)
        {
            printf("Error");
            return;
        }
        arr[++top] = x;
    }

    void Pop()
    {
        if (top == -1)
        {
            printf("Error");
            return;
        }
        top--;
    }

    int Top()
    {
        return arr[top];
    }

    int IsEmpty()
    {
        if (top == -1)
            return 1;
        return 0;
    }

    void Print()
    {
        int i;
        printf("Stack: ");
        for (i = 0; i <= top; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
};

int main()
{
    Stack S;  // Create a Stack object
    S.Push(1); S.Print();
    S.Push(5); S.Print();
    S.Push(6); S.Print();

    // Shallow Copy
    Stack S1 = S;
    S.Pop(); S.Print();  // S1 and S share the same data
    S1.Print();          // S1 will also be affected

    // Deep Copy
    Stack S2(S);
    S.Pop(); S.Print();  // S2 is an independent copy
    S2.Print();          // S2 remains unaffected

    return 0;
}