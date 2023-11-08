#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex() : real(0), imag(0) {}

    Complex(int r, int i) : real(r), imag(i) {}

    Complex addMember(const Complex& other) {
        Complex result;
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }

    void print() {
        if (imag >= 0) {
            cout << real << " + " << imag << "i";
        } else {
            cout << real << " - " << -imag << "i";
        }
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
}


