#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter x: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "Zoj";
    } else {
        cout << "Fard";
    }

    return 0;
}