#include <iostream>

using namespace std;

int main(){
    int A, B, temp;

    cout << "Enter A and B: ";
    cin >> A >> B;

    temp = A;
    A = B;
    B = temp;

    cout << "A: " << A << " B: " << B;

    return 0;
}