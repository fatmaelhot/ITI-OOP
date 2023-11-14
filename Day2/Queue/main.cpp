#include <iostream>
using namespace std;
#define SIZE 101

class Queue
{
private:
    int arr[SIZE];
    int front, rear;

public:
    // constructor
    Queue()
    {
        front = rear = -1;
    }

    void Push(int x)
    {
        if (rear == SIZE - 1)
        {
            cout << "Error" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = x;
    }

    void Pop()
    {
        if (IsEmpty())
        {
            cout << "Error" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    int Front()
    {
        if (IsEmpty())
        {
            cout << "Error" << endl;
            return -1;
        }
        return arr[front];
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    void Print()
    {
        if (IsEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    /*int s1, s2, s3;
    cout << "Enter elements: ";
    cin >> s1 >> s2 >> s3;
    Queue S;
    S.Push(s1);S.Print();
    S.Push(s2);S.Print();
    S.Push(s3);S.Print();
    S.Pop();S.Print();
    S.Pop();S.Print();
    S.Pop();S.Print();*/
    Queue S;
    S.Pop();
    S.Push(5);S.Print();
    S.Push(7);S.Print();
    S.Push(10);S.Print();
    S.Pop();S.Print();
    S.Pop();S.Print();
    S.Push(11);S.Print();
    S.Pop();S.Print();
    S.Pop();S.Print();
    S.Pop();S.Print();

    return 0;
}

