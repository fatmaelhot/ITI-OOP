#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex() : real(0), imag(0) {}

    Complex(int r, int i) : real(r), imag(i) {}
};

// Stand-alone function to add two Complex objects
Complex* addComplex(const Complex& c1, const Complex& c2) {
    Complex* result = new Complex;
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
    return result;
}

// Stand-alone function to print a Complex object
void printComplex(const Complex& c) {
    if (c.imag >= 0) {
        cout << c.real << " + " << c.imag << "i";
    } else {
        cout << c.real << c.imag << "i";
    }
}

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

    Complex* c1 = new Complex(real1, imag1);  // Dynamically allocate memory for c1
    Complex* c2 = new Complex(real2, imag2);  // Dynamically allocate memory for c2

    Complex* sum = addComplex(*c1, *c2);  // Calculate sum and dynamically allocate memory

    cout << "c1 = ";
    printComplex(*c1);
    cout << endl;

    cout << "c2 = ";
    printComplex(*c2);
    cout << endl;

    cout << "Sum of c1 and c2 = ";
    printComplex(*sum);
    cout << endl;

    // to release the dynamically allocated memory
    delete c1;
    delete c2;
    delete sum;

    return 0;
}


