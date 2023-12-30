#include <iostream>

using namespace std;

int main(){
    int i, n, f1, f2, f3;

    cout << "Enter n: ";
    cin >> n;

    f1 = f2 = 1;
    cout << f1 << "\n" << f2 << "\n";

    for (i=3; i<=n; i++){
        f3 = f1 + f2;
        cout << f3 << "\n";
        f1 = f2;
        f2 = f3;
    }
    
    return 0;
}