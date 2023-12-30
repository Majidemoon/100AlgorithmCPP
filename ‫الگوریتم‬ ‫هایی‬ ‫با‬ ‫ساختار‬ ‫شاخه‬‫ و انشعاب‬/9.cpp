#include <iostream>

using namespace std;

int main(){
    int a, b, max, min;

    cout << "Enter a and b: ";
    cin >> a >> b;

    if (a>b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (max % min == 0)
    {
        cout << "بخش پذیز است";
    }
    else
    {
        cout << "بخش پذیز نیست";
    }
    
    
    

    return 0;
}