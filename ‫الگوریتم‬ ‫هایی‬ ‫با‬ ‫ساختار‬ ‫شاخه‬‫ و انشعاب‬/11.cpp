#include <iostream>

using namespace std;

int main(){
    float x;

    cout << "Enter x: ";
    cin >> x;
    
    if (x<200000)
    {
        x = x * 98 / 100;
    }
    else if (x<400000)
    {
        x = x * 97 /100;
    }
    else
    {
        x = x * 95 / 100;
    }
    
    cout << x;

    return 0;
}