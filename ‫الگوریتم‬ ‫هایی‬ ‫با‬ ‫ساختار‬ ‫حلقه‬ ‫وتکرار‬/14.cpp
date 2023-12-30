#include <iostream>

using namespace std;

int main(){
    int x, i, fact=1;

    cout << "Enter x: ";
    cin >> x;

    for (i=1; i<=x; i++)
        fact = fact * i;

    cout << "fact: " << fact;

    return 0;
}