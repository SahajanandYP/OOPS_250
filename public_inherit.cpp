#include <iostream>
using namespace std;

class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
private:
    int priv = 30;
};

class Derived : public Base {
public:
    void show() {
        cout << "Public: " << pub << endl;
        cout << "Protected: " << prot << endl;
        // cout << priv;
    }
};

int main() {
    Derived d;
    cout << d.pub << endl;
    // cout << d.prot;
}
