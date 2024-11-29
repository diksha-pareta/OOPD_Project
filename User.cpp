#include "User.h"

using namespace std;

User::User(int id) : id(id) {}

int User::getId() const {
    return id;
}

const vector<Packet>& User::getPackets() const {
    return packets;
}
