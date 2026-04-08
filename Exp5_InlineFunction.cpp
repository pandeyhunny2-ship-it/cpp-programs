#include <iostream>
using namespace std;

class Calc {
public:
    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calc c;
    cout << c.add(5, 3);
}
