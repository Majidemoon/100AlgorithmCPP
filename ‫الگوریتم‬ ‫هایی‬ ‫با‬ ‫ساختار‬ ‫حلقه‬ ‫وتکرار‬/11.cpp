#include <iostream>

using namespace std;

int main(){
    int A, B, min, max, i;

    cout << "Enter A and B: ";
    cin >> A >> B;

    if (A>B){
        min = B;
        max = A;
    }
    else{
        min = A;
        max = B;
    }

    if (min % 2 == 0)
    {
        min = min - 1;
    }

    for (i=min+2; i<max; i=i+2)
        cout << i << "\n";
    

    return 0;
}