#ifndef USER_H
#define USER_H

#include "Packet.h"
#include <vector>

using namespace std;

class User {
public:
    User(int id);
    int getId() const;
    const vector<Packet>& getPackets() const;

private:
    int id;
    vector<Packet> packets;
};

#endif
