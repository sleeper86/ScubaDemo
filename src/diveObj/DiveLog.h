//
// Created by sleeper on 10/2/2024.
//

#ifndef DIVELOG_H
#define DIVELOG_H
#include "DiveEntry.h"

namespace diveObj {

class DiveLog {
public:
    void addDiveEntry(const DiveEntry &entry);
    void removeDiveEntry(int index);
    static void getDiveEntry(DiveEntry &entry);
    static void insertDiveEntry(DiveEntry &entry, int index);
private:
    vector<DiveEntry> diveEntries;

};

} // diveObj

#endif //DIVELOG_H
