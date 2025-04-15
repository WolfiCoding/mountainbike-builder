
#include "Suspension.h"

Suspension::Suspension(std::string b, std::string m, double w, double c, int travel)
        : Part(b, m, w, c), travel(travel) {}

int Suspension::getTravel() const {
    return this->travel;
}

