#include <iostream>

using namespace std;

int main(){
    int i, n, c=1, sum=0;

    cout << "Enter n: ";
    cin >> n;

    for (i=1; i<=n; i++){
        sum = sum + i*c ;
        c = c * -1;
    }

    cout << "sum: " << sum;

    return 0;
}