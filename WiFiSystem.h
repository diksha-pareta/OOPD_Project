#ifndef WIFISYSTEM_H
#define WIFISYSTEM_H

#include "AccessPoint.h"
#include "User.h"
#include <vector>

using namespace std;

class WiFiSystem {
public:
    WiFiSystem();
    void runSimulation(int version, int numUsers);

private:
    AccessPoint accessPoint;
    vector<User> users;
};

#endif
