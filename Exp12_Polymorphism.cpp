#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A\n";
    }
};

class B : public A {
public:
    void show() {
        cout << "B\n";
    }
};

int main() {
    B obj;
    obj.show();
}
