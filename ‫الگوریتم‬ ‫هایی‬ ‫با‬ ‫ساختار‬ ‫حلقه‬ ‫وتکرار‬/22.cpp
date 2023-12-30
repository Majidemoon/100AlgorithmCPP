#include <iostream>

using namespace std;

int main(){
    int x, a=0, i=1;

    cout << "Enter x: ";
    cin >> x;

    while (x>0)
    {
        if (x%10==1)
            a = a + i;
        
        x = x / 10;
        i = i * 2;
    }

    cout << a;
    
    return 0;
}