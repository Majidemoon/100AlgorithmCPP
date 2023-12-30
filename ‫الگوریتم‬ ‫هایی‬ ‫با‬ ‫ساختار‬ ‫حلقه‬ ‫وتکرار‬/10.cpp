#include <iostream>

using namespace std;

int main(){
    int x, i;

    cout << "Enter x: ";
    cin >> x;

    if (x % 2 == 1)
    {
            x = x - 1;
    }
    
    for (i = x; i > 0; i=i-2)
        cout << i << "\n";

    return 0;
}