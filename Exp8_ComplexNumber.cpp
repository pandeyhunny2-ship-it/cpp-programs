#include <iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    Complex operator+(Complex c) {
        return Complex(real + c.real, img + c.img);
    }
    void display() {
        cout << real << "+" << img << "i";
    }
};

int main() {
    Complex c1(2,3), c2(1,4);
    Complex c3 = c1 + c2;
    c3.display();
}
