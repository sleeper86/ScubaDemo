//
// Created by sleeper on 10/2/2024.
//

#ifndef DIVEENTRY_H
#define DIVEENTRY_H

#include <chrono>

using namespace std;

namespace diveObj {

class DiveEntry {
public:
    DiveEntry();
    explicit DiveEntry(int _index);
    ~DiveEntry();

    [[nodiscard]] int get_index() const {
        return index;
    }

    void set_index(int index) {
        this->index = index;
    }

    [[nodiscard]] string get_name() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    [[nodiscard]] chrono::system_clock::time_point get_last_updated() const {
        return lastUpdated;
    }

    void set_last_updated(const chrono::system_clock::time_point &last_updated) {
        lastUpdated = last_updated;
    }

    [[nodiscard]] time_t get_time_of_dive() const {
        return timeOfDive;
    }

    void set_time_of_dive(time_t time_of_dive) {
        timeOfDive = time_of_dive;
    }

    [[nodiscard]] int get_max_depth() const {
        return maxDepth;
    }

    void set_max_depth(int max_depth) {
        maxDepth = max_depth;
    }

    [[nodiscard]] int get_total_dive_time() const {
        return totalDiveTime;
    }

    void set_total_dive_time(int total_dive_time) {
        totalDiveTime = total_dive_time;
    }

    [[nodiscard]] float get_percent_oxygen() const {
        return percentOxygen;
    }

    void set_percent_oxygen(float percent_oxygen) {
        percentOxygen = percent_oxygen;
    }

private:
    int index;
    string name;
    chrono::system_clock::time_point lastUpdated;
    time_t timeOfDive;
    int maxDepth; // In feet
    int totalDiveTime; // In minutes
    float percentOxygen;

};

} // diveObj

#endif //DIVEENTRY_H
