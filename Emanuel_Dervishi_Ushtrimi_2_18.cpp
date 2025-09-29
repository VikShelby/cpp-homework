#include <iostream>
using namespace std;

int main() {
    int a, b;

    
    cout << "Shkruani dy numra te plote: ";
    cin >> a >> b;
    if (a > b) {
        cout << a << " is larger." << endl;
    } 
    else if (b > a) {
        cout << b << " is larger." << endl;
    } 
    else {
        cout << "These numbers are equal." << endl;
    }

    return 0;
}
