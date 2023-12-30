#include <iostream>

using namespace std;

int main(){
    int i, a, n, r=1;

    cout << "Enter a and n: ";
    cin >> a >> n;

    for (i=1; i<=n; i++)
        r = r * a;

    cout << r;
    
    return 0;
}