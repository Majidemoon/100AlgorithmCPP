#include <iostream>

using namespace std;

int main(){
    int r;
    float p, s, pi = 3.14;

    cout << "Enter r: ";
    cin >> r;

    p = 2 * pi * r;
    s = pi * r * r;

    cout << "P: " << p << " S: " << s;

    return 0;
}