#include <iostream>

using namespace std;

int main(){
    int i, x;

    cout << "Enter x: ";
    cin >> x;

    for (i=1; i<=x/2; i++)
        if (x % i == 0)
            cout << i << "\n";
    cout << x;

    return 0;
}