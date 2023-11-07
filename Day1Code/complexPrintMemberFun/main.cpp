#include <iostream>
using namespace std;

class complex1 {
public:
    int real, image;

    // print function
    void printComplex() {
        if (image > 0) {
            cout << real << "+" << image << "i";
        }
        else if (image < 0) {
            cout << real << image << "i";
        }
        else {
            cout << real;
        }
    }

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

int main() {
    complex1 *c1 = new complex1;  // Create a dynamic object using 'new'

    int real, image;

    cout << "Enter real: ";
    cin >> real;
    c1->setReal(real);

    cout << "Enter image: ";
    cin >> image;
    c1->setImage(image);

    cout << "c1 = ";
    c1->printComplex();

    cout << endl;

    delete c1;  // Don't forget to release the memory when done

    return 0;
}

