#include <iostream>

using namespace std;

int func(int n);

int main(){
    int i, n, sum=0, ii=3;

    cout << "Enter n: ";
    cin >> n;

    for (i=1; i<=n; i++){
        sum = sum + func(ii);
        ii = ii + 2;
    }

    cout << "sum: " << sum;

    return 0;
}

int func(int n){
    return n * (n-2);
}