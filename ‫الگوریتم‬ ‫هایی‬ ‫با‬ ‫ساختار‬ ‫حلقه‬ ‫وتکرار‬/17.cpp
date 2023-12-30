#include <iostream>

using namespace std;

int main(){
    int n, i, x, sum=0;
    float ave;

    cout << "Enter n: ";
    cin >> n;

    for (i = 1; i <= n; i++){
        cout << "Number" << i << ": ";
        cin >> x;
        sum = sum + x;
    }

    ave = (float) sum / n;

    cout << "sum: " << sum << " ave: " << ave;

    return 0;
}