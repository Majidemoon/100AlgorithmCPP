#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter x: ";
    cin >> x;

    if (x > 0)
    {
        cout << "x is +";
    } else if (x < 0){
        cout << "x is -";
    } else {
        cout << "x is 0";
    }
    
    return 0;
}