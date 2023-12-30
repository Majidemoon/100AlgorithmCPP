#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    float r;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    r = c - b;
    r = (float) r / a;

    cout << "Result: " << r;

    return 0;
}