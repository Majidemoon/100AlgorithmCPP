#include <iostream>

using namespace std;

int main(){
    int n, x, i, max, min;

    cout << "Enter n: ";
    cin >> n;

    cout << "Number1: ";
    cin >> x;
    min = max = x;

    for (i=2; i<=n; i++){
        cout << "Number" << i << ": ";
        cin >> x;
        if (x>max)
            max = x;
        if (x<min)
            min = x;
    }

    cout << "max: " << max << " min: " << min;
     
    return 0;
}