#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int a) { x = a; }
    Demo operator+(Demo d) {
        return Demo(x + d.x);
    }
    void show() {
        cout << x;
    }
};

int main() {
    Demo d1(5), d2(3);
    Demo d3 = d1 + d2;
    d3.show();
}
