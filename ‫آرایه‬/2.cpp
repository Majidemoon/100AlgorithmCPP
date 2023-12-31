#include <iostream>

using namespace std;

int main(){   
    int i, x, max1, max2, ary[30];

    cout << "Enter ary[1]: ";
    cin >> x;
    max1 = max2 = x;

    for (i=2; i<=30; i++){
        cout << "Enter ary[" << i << "]: ";
        cin >> x;
        
        if (x>max2){
            if (x>max1){
                max2 = max1;
                max1 = x;
            }
            else{
                max2 = x;
            }
        }
    }

    cout << max1 << " " << max2;

    return 0;
}