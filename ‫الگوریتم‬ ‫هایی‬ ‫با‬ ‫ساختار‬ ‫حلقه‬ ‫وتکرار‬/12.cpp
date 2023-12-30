#include <iostream>

using namespace std;

int main(){
    int x, i;

    for (i = 1; i <= 20; i++){
        cout << "Number" << i << ": ";
        cin >> x;
        cout << x << "\n";
    }

    return 0;
}