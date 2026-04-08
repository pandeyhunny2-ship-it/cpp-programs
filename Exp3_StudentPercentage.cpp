#include <iostream>
using namespace std;

class Student {
    int m1, m2, m3;
public:
    void get() {
        cin >> m1 >> m2 >> m3;
    }
    void show() {
        int total = m1 + m2 + m3;
        cout << "Percentage: " << total / 3.0;
    }
};

int main() {
    Student s;
    s.get();
    s.show();
}
