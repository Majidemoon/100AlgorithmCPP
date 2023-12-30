#include <iostream>

using namespace std;

int main(){
    int x, a, c, f=1;
    a = c = 0;

    cout << "Enter x: ";
    cin >> x;

    while (x>0)
    {
        if (x%2==0)
            {
                f = f * 10;
                x = x / 2;
            }
            else
            {
                a = x % 2;
                x = x / 2;
                while (x>0)
                {
                    a = a * 10;
                    a = a + (x%2);
                    x = x / 2;
                }
                break;
            }
    }

    
    
    while (a>0)
    {
        c = c * 10;
        c = c + (a%10);
        a = a /10;
    }

    c = c * f;

    cout << c;  
    
    
    return 0;
}