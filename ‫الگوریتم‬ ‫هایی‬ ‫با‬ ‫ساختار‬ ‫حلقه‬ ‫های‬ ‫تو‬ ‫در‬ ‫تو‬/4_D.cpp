#include <iostream>

using namespace std;

int main(){
    int i, j;

    for (i=1; i<=4; i++){
        for (j=5-i; j>0; j--){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}