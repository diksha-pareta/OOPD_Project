#ifndef ACCESSPOINT_H
#define ACCESSPOINT_H

#include "User.h"
#include "Packet.h"
#include <vector>

class AccessPoint {
public:
    AccessPoint(int id);
    void simulateWiFi4(std::vector<User>& users);
    void simulateWiFi5(std::vector<User>& users);
    void simulateWiFi6(std::vector<User>& users);
    void printResults(double throughput, double avgLatency, double maxLatency);

private:
    int id;
};

#endif
