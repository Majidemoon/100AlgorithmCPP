#include <iostream>

using namespace std;

int main(){
    int p, i, n=0;

    cout << "Enter p: ";
    cin >> p;

    for (i=1; p>0; i++){
        n++;
        p = p / 10;
    }

    cout << n;

    return 0;
}