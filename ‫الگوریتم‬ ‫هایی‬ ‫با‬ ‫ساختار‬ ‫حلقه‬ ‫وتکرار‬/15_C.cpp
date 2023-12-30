#include <iostream>

using namespace std;

int main(){
    int p, i, m=0;

    cout << "Enter p: ";
    cin >> p;

    for (i=1; p>0; i++){
        m = m * 10;
        m = m + p % 10;
        p = p / 10;
    }

    cout << m;

    return 0;
}