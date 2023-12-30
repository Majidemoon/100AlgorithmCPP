#include <iostream>

using namespace std;

int main(){
    int x, y, p, s;

    cout << "Enter x and y: ";
    cin >> x >> y;

    p = 2 * (x + y);
    s = x * y;

    cout << "P: " << p << " S: " << s;

    return 0;
}