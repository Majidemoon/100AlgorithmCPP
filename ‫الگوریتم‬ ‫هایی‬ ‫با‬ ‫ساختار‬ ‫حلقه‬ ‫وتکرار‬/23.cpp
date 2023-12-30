#include <iostream>

using namespace std;

int main(){
    int i, x, max;

    cout << "Enter x: ";
    cin >> x;
    max = x;

    while (x>=0)
    {
        cout << "Enter x: ";
        cin >> x;

        if (x > max)
            max = x;
    }

    cout << max;
    

    return 0;
}