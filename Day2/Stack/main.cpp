#include <iostream>
using namespace std;
#define SIZE 101

class Stack
{
private:
  int arr[SIZE];
	int top;
public:
	// constructor
	Stack()
	{
		top = -1;
	}

	void Push(int x)
	{
	  if(top == SIZE -1) {
			printf("Error");
			return;
		}
		arr[++top] = x;
	}


	void Pop()
	{
		if(top == -1) {
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
		if(top == -1) return 1;
		return 0;
	}


	void Print() {
		int i;
		printf("Stack: ");
		for(i = 0;i<=top;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}
};

int main()
{
   /* int arr1[5];
    for(int i=0;i<5;i++){
        cout << "enter elements ";
        cin >>arr1[i];
    }
    for(int j=0;j<5;j++){
        Stack S;
        S.Push(arr1[j]);S.Print();
        S.Pop();S.Print();

    }
    int s1,s2,s3;
    cout << "enter elements ";
    cin>> s1>>s2>>s3;
	Stack S;
	S.Push(s1);S.Print();
	S.Push(s2);S.Print();
	S.Push(s3);S.Print();
	S.Pop();S.Print();
	S.Pop();S.Print();
	S.Pop();S.Print();*/
Stack S;
S.Pop();S.Print(); //empty
S.Push(1);S.Print();
S.Push(5);S.Print();
S.Push(6);S.Print();
S.Pop();S.Print();//1
S.Pop();S.Print();//5
S.Push(7);S.Print();
S.Pop();S.Print();//6
S.Pop();S.Print();//7
S.Pop();S.Print();//Empty
S.Push(7);S.Print();
S.Pop();S.Print();//7



}
