#include <iostream>

using namespace std;

int main(){
    int i, x, sum=0, n=0;
    float ave;


    while (x!=0)
    {
        cout << "Enter x: ";
        cin >> x;

        sum = sum + x;
        n = n + 1;
    }


    ave = (float) sum / (n-1);
    cout << ave;
    

    return 0;
}