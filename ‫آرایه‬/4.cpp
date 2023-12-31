#include <iostream>

using namespace std;

int main(){   
    int i, x, temp, a=1, b=0, ary[5];

    for (i=1; i<=5; i++){
        cout << "Enter ary[" << i << "]: ";
        cin >> x;
        ary[i] = x;
    }
    while(a==1){
        b = 0;
        for (i=1; i<5; i++){
            if (ary[i+1]>ary[i]){
                temp = ary[i];
                ary[i] = ary[i+1];
                ary[i+1] = temp;
                b++;
            }
        }
        
        if (b==0)
            a = 0;
    }

    for(i=1; i<=5; i++)
        cout << "ary[" << i << "]: " << ary[i] << "\n";

    return 0;
}