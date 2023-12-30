#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, sum;
    float ave;

    cout << "Enter 4 number: ";
    cin >> a >> b >> c >> d;

    sum = a + b + c + d;
    ave = (float) sum / 4;

    cout << "sum: " << sum << " ave: " << ave;

    return 0;
}