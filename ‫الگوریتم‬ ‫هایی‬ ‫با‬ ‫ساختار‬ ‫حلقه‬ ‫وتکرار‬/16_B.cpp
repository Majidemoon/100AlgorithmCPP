#include <iostream>

using namespace std;

int main(){
    int i, x, n=1;

    cout << "Enter x: ";
    cin >> x;

    for (i=1; i<=x/2; i++)
        if (x % i == 0)
            n = n + 1;
    
    cout << n;

    return 0;
}