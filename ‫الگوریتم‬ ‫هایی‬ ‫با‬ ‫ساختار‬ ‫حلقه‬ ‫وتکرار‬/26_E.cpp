#include <iostream>

using namespace std;

int power(int x, int n);
int fact(int n);

int main(){
    int i, n, x;
    float sum=0;

    cout << "Enter x and n: ";
    cin >> x >> n;

    for (i=1; i<=n; i++)
        sum = sum + (float) power(x, i)/fact(i);

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

int fact(int n){
    int i, f=1;

    for (i=1; i<=n; i++)
        f = f * i;

    return f;
}