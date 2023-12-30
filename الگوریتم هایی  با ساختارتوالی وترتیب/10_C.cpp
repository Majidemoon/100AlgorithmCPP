#include <iostream>

using namespace std;

int main(){
    int x, x1, x2;

    cout << "Enter x: ";
    cin >> x;

    x1 = x / 10;
    x2 = x % 10;
    x = x2 * 10 + x1;

    cout << x;

    return 0;
}