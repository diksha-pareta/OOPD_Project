#ifndef FREQUENCYCHANNEL_H
#define FREQUENCYCHANNEL_H

class FrequencyChannel {
public:
    FrequencyChannel(int id, double bandwidth);
    int getId() const;
    double getBandwidth() const;

private:
    int id;
    double bandwidth;
};

#endif
