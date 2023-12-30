#include <iostream>

using namespace std;

int power(int x, int n);

int main(){
    int i, n, x, sum=0;

    cout << "Enter x and n: ";
    cin >> x >> n;

    for (i=1; i<=n; i++)
        sum = sum + power(x, 2*i);

    cout << "sum: " << sum;

    return 0;
}

int power(int x, int n){
    int i, p=1;

    for (i=1; i<=n; i++)
    {
        p = p * x;
    }

    return p;
}