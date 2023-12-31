#include <iostream>

using namespace std;

int main(){
    int i, j, x, sum;

    for (i=1; i<=20; i++){
        sum = 0;

        for (j=1; j<=3; j++){
            cout << "Enter student " << i << " book " << j << ": ";
            cin >> x;
            sum = sum + x;
        }

        cout << "ave: " << sum / 3 << "\n";
    }

    return 0;
}