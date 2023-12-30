#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter x: ";
    cin >> x;

    if (x>=18)
    {
        cout << 'A';
    }
    else if (x>=16)
    {
        cout << 'B';
    }
    else if (x>=10)
    {
        cout << 'C';
    }
    else
    {
        cout << 'D';
    }
    
    
    

    return 0;
}