#include "FrequencyChannel.h"

FrequencyChannel::FrequencyChannel(int id, double bandwidth) : id(id), bandwidth(bandwidth) {}

int FrequencyChannel::getId() const {
    return id;
}

double FrequencyChannel::getBandwidth() const {
    return bandwidth;
}
