#include <iostream>

using namespace std;

int power(int n);

int main(){
    int i, n;
    float sum=0;

    cout << "Enter n: ";
    cin >> n;

    for (i=1; i<=n; i++)
        sum = sum + (float) 1/power(i);

    cout << "sum: " << sum;

    return 0;
}

int power(int n){
    return n * n;
}