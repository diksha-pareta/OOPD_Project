#include "AccessPoint.h"
#include <iostream>
#include <algorithm>

using namespace std;

AccessPoint::AccessPoint(int id) : id(id) {}

void AccessPoint::simulateWiFi4(std::vector<User>& users) {
    // Simulate CSMA/CA for WiFi 4
    double avgLatency = 0.06144 * users.size();
    double maxLatency = 0.06144 * users.size();
    double throughput = 133.333 / users.size();
    printResults(throughput, avgLatency, maxLatency);
}

void AccessPoint::simulateWiFi5(std::vector<User>& users) {
    // Simulate MU-MIMO for WiFi 5
    double avgLatency = 0.009 * users.size();
    double maxLatency = 0.009 * users.size();
    double throughput = 1500 / users.size();
    printResults(throughput, avgLatency, maxLatency);
}

void AccessPoint::simulateWiFi6(std::vector<User>& users) {
    // Simulate OFDMA for WiFi 6
    double avgLatency = 0.008 * users.size();
    double maxLatency = 0.008 * users.size();
    double throughput = 2500 / users.size();
    printResults(throughput, avgLatency, maxLatency);
}

void AccessPoint::printResults(double throughput, double avgLatency, double maxLatency) {
    cout << "Simulation Results:\n";
    cout << "Average Latency: " << avgLatency << " ms\n";
    cout << "Maximum Latency: " << maxLatency << " ms\n";
    cout << "Throughput: " << throughput << " Mbps\n";
}
