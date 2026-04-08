#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor\n";
    }
    Demo(int x) {
        cout << "Parameterized: " << x << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
}
