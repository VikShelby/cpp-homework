#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

double readPositive(const string& prompt, bool allowZero = false) {
    double x;
    while (true) {
        cout << prompt;
        if (cin >> x && (allowZero ? x >= 0.0 : x > 0.0)) return x;
        cout << "Vlere e pavlefshme. Provo perseri.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int readIntMin(const string& prompt, int minVal) {
    int x;
    while (true) {
        cout << prompt;
        if (cin >> x && x >= minVal) return x;
        cout << "Vlere e pavlefshme. Provo perseri.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    cout << "=== Daily Driving Cost Calculator ===\n\n";

    
    double milesPerDay      = readPositive("a) Total miles driven per day: ");
    double costPerGallon    = readPositive("b) Cost per gallon of gasoline: ");
    double mpg              = readPositive("c) Average miles per gallon: ");
    double parkingPerDay    = readPositive("d) Parking fees per day (0 if none): ", /*allowZero=*/true);
    double tollsPerDay      = readPositive("e) Tolls per day (0 if none): ", /*allowZero=*/true);

   
    double fuelCost = (milesPerDay / mpg) * costPerGallon;
    double totalDailyCost = fuelCost + parkingPerDay + tollsPerDay;

   
    cout << "\nOpsionale: Llogarit per-person ne carpool.\n";
    int riders = readIntMin("Numri i personave ne makine (1 nese udhetoni vetem): ", 1);
    double perPerson = totalDailyCost / riders;

    cout << fixed << setprecision(2);
    cout << "\n--- Rezultatet ---\n";
    cout << "Fuel cost per day: $" << fuelCost << "\n";
    cout << "Parking per day:   $" << parkingPerDay << "\n";
    cout << "Tolls per day:     $" << tollsPerDay << "\n";
    cout << "TOTAL per day:     $" << totalDailyCost << " (solo)\n";
    if (riders > 1) {
        cout << "Per person (carpool, " << riders << " riders): $" << perPerson << "\n";
        cout << "Kursimi per person krahasuar me solo: $"
             << (totalDailyCost - perPerson) << " / dite\n";
    }

    cout << "\nFaleminderit!\n";
    return 0;
}
