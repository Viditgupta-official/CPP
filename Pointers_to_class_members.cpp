#include <iostream>

using namespace std;

class c1{
    public:
    c1(int i) { val=i; }
    int val;
    int double_val() { return val+val;}
};

int main(){
    int c1::*data; //data member pointer
    int (c1::*func) (); //function member pointer
    c1 ob1(1), ob2(2); //create objects

    data = &c1::val; //get offset of val
    func = &c1::double_val; //get offset of double val

    cout << "Here are values: ";
    cout << ob1.*data << " " << ob2.*data << "\n";

    cout << "Here they are doubled: ";
    cout << (ob1.*func) () << " ";
    cout << (ob2.*func) () << "\n";

    return 0;
}