#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, delta;
    float x, x1, x2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    delta = (b * b) + (-4) * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "x1: " << x1 << " x2: " << x2;
    } 
    else if (delta == 0) 
    {
        x = -b / (2 * a);

        cout << "x: " << x;
    }
    else
    {
        cout << "ریشه ندارد";
    }
    
    

    return 0;
}