#include <iostream>
using namespace std;

class Hotel {
    int days;
    float rent = 500;
public:
    void get() {
        cout << "Enter number of days: ";
        cin >> days;
    }
    void bill() {
        cout << "Total Bill: " << days * rent;
    }
};

int main() {
    Hotel h;
    h.get();
    h.bill();
}
