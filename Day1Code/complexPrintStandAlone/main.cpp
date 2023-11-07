#include <iostream>
using namespace std;

class complex1 {
public:
    int real, image;

    void setReal(int r) {
        real = r;
    }

    int getReal() {
        return real;
    }

    void setImage(int j) {
        image = j;
    }

    int getImage() {
        return image;
    }
};

// Stand-alone function to print a complex number
void printComplex(const complex1& c) {
    if (c.image > 0) {
        cout << c.real << " + " << c.image << "i";
    }
    else if (c.image < 0) {
        cout << c.real << " " << c.image << "i";
    }
    else {
        cout << c.real;
    }
}

int main() {
    int real, image;

    cout << "Enter real: ";
    cin >> real;

    cout << "Enter image: ";
    cin >> image;

    complex1* c1 = new complex1;
    c1->setReal(real);
    c1->setImage(image);

    cout << "c1 = ";
    printComplex(*c1);

    cout << endl;

    delete c1; // to release the dynamically allocated memory

    return 0;
}



