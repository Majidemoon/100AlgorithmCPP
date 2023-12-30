#include <iostream>

using namespace std;

int main(){
    int t, h, m, s;

    cout << "Enter seconds: ";
    cin >> t;

    h = t / 3600;
    t = t % 3600;
    m = t / 60;
    s = t % 60;

    cout << h << ":" << m << ":" << s;

    return 0;
}