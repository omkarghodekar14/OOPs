#include<bits/stdc++.h>
using namespace std;

class MyClass{
    public:

    MyClass() {
        cout << "Constructor called" << endl;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    MyClass obj; // static creation

    MyClass *obj2 = new MyClass(); // dynamic creation

    cout << "Delete obj" << endl;

    delete obj2;
}