#include <iostream>
using namespace std;

class c1 {
    int h, i;
    public:
    c1(int j, int k) { h=j; i=k; } //constructor with two parameters.
    int get_i() { return i;}
    int get_h() { return h;}
};

int main(){
    c1 ob[3] = {
        c1( 1,2 ),  //initializing array
        c1( 3,4 ),
        c1( 5,6 )
    };

    int i;

    for (i=0; i<3; i++) {
        cout << ob[i].get_h();
        cout << ", ";
        cout << ob[i].get_i() << "\n";
    }

    return 0;
}