#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    int unitChoice;

    cout << "Zgjidh njesine:\n";
    cout << "1. Pesha ne pound dhe gjatesia ne inç\n";
    cout << "2. Pesha ne kilogram dhe gjatesia ne meter\n";
    cout << "Zgjedhja: ";
    cin >> unitChoice;

    if (unitChoice == 1) {
        cout << "Shkruani peshen (pounds): ";
        cin >> weight;
        cout << "Shkruani gjatesine (inches): ";
        cin >> height;
        bmi = (weight * 703) / (height * height);
    } 
    else if (unitChoice == 2) {
        cout << "Shkruani peshen (kg): ";
        cin >> weight;
        cout << "Shkruani gjatesine (m): ";
        cin >> height;
        bmi = weight / (height * height);
    } 
    else {
        cout << "Zgjedhje e pavlefshme!" << endl;
        return 0;
    }

    cout << "\n📊 BMI juaj eshte: " << bmi << endl;

    // Interpretimi i BMI
    if (bmi < 18.5)
        cout << "Statusi: Underweight" << endl;
    else if (bmi < 25)
        cout << "Statusi: Normal" << endl;
    else if (bmi < 30)
        cout << "Statusi: Overweight" << endl;
    else
        cout << "Statusi: Obese" << endl;

    return 0;
}

