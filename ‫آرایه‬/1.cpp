#include <iostream>

using namespace std;

int main(){
    int i, x, ary[50];

    for (i=1; i<=50; i++){
        cout << "Enter ary[" << i << "]: ";
        cin >> x;
        ary[i] = x;
    }

    for (i=50; i>=1; i--)
        cout << "ary[" << i << "]: " << ary[i] << "\n";

    return 0;
}