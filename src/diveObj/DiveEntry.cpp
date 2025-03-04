//
// Created by sleeper on 10/2/2024.
//

#include "DiveEntry.h"

using namespace std;

namespace diveObj {
    DiveEntry::DiveEntry() {
        index = -1;
        name = "";
        lastUpdated = std::chrono::system_clock::now();
        timeOfDive = std::chrono::system_clock::to_time_t(lastUpdated); // Let them update later
        maxDepth = 0.0f; // In feet
        totalDiveTime = 0; // In minutes
        percentOxygen = 21.0;
    }

    DiveEntry::~DiveEntry() = default;


} // diveObj