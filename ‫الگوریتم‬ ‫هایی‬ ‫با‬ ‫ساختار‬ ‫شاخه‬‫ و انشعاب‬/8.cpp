#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cout << "Enter 3 number: ";
    cin >> a >> b >> c;

    if (a>b)
    {
        if (a>c)
        {
            if (b>c)
            {
                cout << a << " " << b << " " << c;
            }
            else
            {
                cout << a << " " << c << " " << b;
            }
            
        }
        else
        {
            cout << c << " " << a << " " << b;
        }
        
    }
    else
    {
        if (b>c)
        {
            if (a>c)
            {
                cout << b << " " << a << " " << c;
            }
            else
            {
                cout << b << " " << c << " " << a;
            }
            
        }
        else
        {
            cout << c << " " << b << " " << a;
        }
        
    }
    

    return 0;
}