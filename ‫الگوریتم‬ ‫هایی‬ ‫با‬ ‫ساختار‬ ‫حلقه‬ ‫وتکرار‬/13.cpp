#include <iostream>

using namespace std;

int main(){
    int x, i, sum=0;

    for (i=1; i <= 10; i++){
        cout << "Number" << i << ": ";
        cin >> x;
        sum = sum + x;
    }

    cout << "sum: " << sum;

    return 0;
}