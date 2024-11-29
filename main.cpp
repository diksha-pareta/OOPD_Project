#include "WiFiSystem.h"
#include <iostream>

using namespace std;

int main() {
    WiFiSystem system;
    int version, numUsers;

    cout << "Enter the WiFi version (4, 5, or 6): ";
    cin >> version;
    cout << "Enter the number of users: ";
    cin >> numUsers;

    system.runSimulation(version, numUsers);

    return 0;
}
