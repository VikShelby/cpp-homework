#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Shkruani dy numra te plote (a b): ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Nuk mund te kontrollojme pjestueshmerine me zero." << endl;
    } 
    else if (a % b == 0) {
        cout << a << " is a multiple of " << b << "." << endl;
    } 
    else {
        cout << a << " is not a multiple of " << b << "." << endl;
    }

    return 0;
}
