//
// Created by sleeper on 10/2/2024.
//

#include "DiveLog.h"

using namespace std;

namespace diveObj {
    void DiveLog::addDiveEntry(const DiveEntry &entry) {
        this->diveEntries.push_back(entry);
    }

    void DiveLog::removeDiveEntry(const int index) {
        if(index < this->diveEntries.size() || index >= this->diveEntries.size()) {
            throw invalid_argument("DiveLog::removeDiveEntry: index out of bounds.");
        } else {
            this->diveEntries.erase(this->diveEntries.begin() + index);
        }
    }

    void DiveLog::getDiveEntry(DiveEntry &entry) {
        throw runtime_error("DiveLog::getDiveEntry: Unimplemented");
    }

    void DiveLog::insertDiveEntry(DiveEntry &entry, int index) {
        throw runtime_error("DiveLog::insertDiveEntry: Unimplemented");
    }
} // diveObj