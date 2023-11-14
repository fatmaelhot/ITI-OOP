/*#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex() : real(0), imag(0) {}

    Complex(int r, int i) : real(r), imag(i) {}

    Complex addMember(Complex c) {
        //Complex c;
        c.real = this->real + c.real;
        c.imag = this->imag + c.imag;
        return c;
    }

    void print() {
        if (imag >= 0) {
            cout << real << " + " << imag << "i";
        } else {
            cout << real << " - " << -imag << "i";
        }
    }
    //prefix
    Complex operator++(){
    real=real+1;
    return *this;
    }
    //postfix
    Complex operator++(int){
    Complex Temp =*this;
    real=real+1;
    return Temp;
    }
    //compound operator
    Complex operator +=(Complex c){
    real=real+c.real;
    imag=imag+c.imag;
    return*this;
    }


};

int main() {
    int real1, imag1, real2, imag2;

    cout << "Enter real part of the first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of the first complex number: ";
    cin >> imag1;

    cout << "Enter real part of the second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of the second complex number: ";
    cin >> imag2;

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);
    Complex c3=++c2;
    c3.print();
    Complex c4=c1+=c2;
    c4.print ();
    c2=c1++;
    Complex sum = c1.addMember(c2);


    cout << "c1 = ";
    c1.print();
    cout << endl;

    cout << "c2 = ";
    c2.print();
    cout << endl;

    cout << "Sum of c1 and c2 = ";
    sum.print();
    cout << endl;

    return 0;
}*/



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

Stack operator=(Stack &S){
top=S.top;
SIZE=S.SIZE;
delete arr;
arr=new int [SIZE];
for(int i=0;i<=top;i++){
arr[i]=S.arr[i];
}
return *this;
}

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
Stack S1=S;

S.Pop();S.Print(); //empty
S.Push(1);S.Print();
S1.Push(2);S1.Print();
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

