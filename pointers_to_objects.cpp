#include <iostream>
using namespace std;

class c1 {
    int i;
    public:
    c1(int j) { i=j; }
    int get_i() { return i; }
};

int main(){
    c1 ob(88), *p;

    p = &ob; //got adress of ob

    cout << p->get_i(); //use -> to call get_i()

    return 0;
}