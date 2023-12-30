#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter x: ";
    cin >> x;

    cout << (float) x * (100 - (5 + 3))/100;

    return 0;
}