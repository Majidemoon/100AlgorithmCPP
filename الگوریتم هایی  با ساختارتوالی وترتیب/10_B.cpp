#include <iostream>

using namespace std;

int main(){
    int x, x1, x2;

    cout << "Enter x: ";
    cin >> x;

    x1 = x / 10;
    x2 = x % 10;

    cout << "sum: " << x1 + x2;

    return 0;
}