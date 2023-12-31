#include <iostream>

using namespace std;

int main(){
    int i, j;

    for (i=1; i<=4; i++){
        for (j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}