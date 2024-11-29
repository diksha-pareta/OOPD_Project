#include "WiFiSystem.h"
#include <iostream> 

using namespace std;

WiFiSystem::WiFiSystem() : accessPoint(1) {}

void WiFiSystem::runSimulation(int version, int numUsers) {
    users.clear();
    for (int i = 1; i <= numUsers; ++i) {
        users.emplace_back(i);
    }

    switch (version) {
        case 4:
            accessPoint.simulateWiFi4(users);
            break;
        case 5:
            accessPoint.simulateWiFi5(users);
            break;
        case 6:
            accessPoint.simulateWiFi6(users);
            break;
        default:
            cout << "Invalid WiFi version!\n"; 
    }
}
