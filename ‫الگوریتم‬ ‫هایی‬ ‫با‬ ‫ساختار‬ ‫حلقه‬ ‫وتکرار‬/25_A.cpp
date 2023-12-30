#include <iostream>

using namespace std;

int main(){
    int i, n, x, a=0;

    cout << "number of class students: ";
    cin >> n;

    for (i=1; i<=n; i++){
        
        cout << "Enter x: ";
        cin >> x;

        if (x<10)
            a = a + 1;
    }

    cout << a;

    return 0;
}