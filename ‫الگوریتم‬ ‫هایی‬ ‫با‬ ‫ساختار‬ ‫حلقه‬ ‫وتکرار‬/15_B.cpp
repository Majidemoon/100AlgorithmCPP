#include <iostream>

using namespace std;

int main(){
    int p, i, sum=0;

    cout << "Enter p: ";
    cin >> p;

    for (i=1; p>0; i++){
        sum = sum + p % 10;
        p = p / 10;
    }

    cout << sum;

    return 0;
}