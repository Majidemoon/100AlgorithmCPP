#include <iostream>

using namespace std;

int main(){   
    int i, x, a=0, ary[30];

    for (i=1; i<=30; i++){
        cout << "Enter ary[" << i << "]: ";
        cin >> x;
        
        if (x==16){
            a++;
        }
    }

    cout << a;

    return 0;
}