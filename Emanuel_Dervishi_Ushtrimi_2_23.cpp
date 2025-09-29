#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5;

    cout << "Shkruani pese numra te plote: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int largest = n1;
    int smallest = n1;

    if (n2 > largest) largest = n2;
    if (n3 > largest) largest = n3;
    if (n4 > largest) largest = n4;
    if (n5 > largest) largest = n5;

    if (n2 < smallest) smallest = n2;
    if (n3 < smallest) smallest = n3;
    if (n4 < smallest) smallest = n4;
    if (n5 < smallest) smallest = n5;

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}
