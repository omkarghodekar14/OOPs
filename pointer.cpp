#include<bits/stdc++.h>
using namespace std;

int main() {

    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int *ptr3 = NULL;

    cout << "Value of a: " << **ptr2 << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Dereferenced value of ptr: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Dereferenced value of ptr2: " << *ptr2 << endl;
    cout << "Address of ptr2: " << &ptr2 << endl;
    cout << "Null pointer Value : " << ptr2 << endl;
}