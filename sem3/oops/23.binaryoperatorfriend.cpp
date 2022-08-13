#include <iostream>
using namespace std;
class complex{
    int real,imag;
    public:
        void set();
        void display();
        friend complex operator+(complex obj1,complex obj2);
        friend complex operator-(complex obj1,complex obj2);
};
void complex::set(){
    cout << "enter real and imaginary number" << endl;
    cin >> real >> imag;
}
void complex::display(){
    cout << real << "+i" << imag << endl;
}
complex operator+(complex obj1,complex obj2){
    complex a;
    a.real = obj1.real + obj2.real;
    a.imag = obj1.imag + obj2.imag;
    return a;
}
complex operator-(complex obj1,complex obj2){
    complex a;
    a.real = obj1.real - obj2.real;
    a.imag = obj1.imag - obj2.imag;
    return a;
}
int main(){
    complex c1,c2,sum,diff;
    c1.set();
    c2.set();
    c1.display();
    c2.display();
    sum = c1+c2;
    sum.display();
    diff = c1-c2;
    diff.display();
}