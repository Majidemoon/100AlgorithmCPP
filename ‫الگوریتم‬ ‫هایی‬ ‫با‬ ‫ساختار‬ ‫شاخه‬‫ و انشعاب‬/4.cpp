#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter x: ";
    cin >> x;

    if (x % 3 == 0)
    {
        cout << "بخش پذیر است";
    } else {
        cout << "بخش پذیر نیست";
    }
    

    return 0;
}