
#include "Suspension.h"

Suspension::Suspension(std::string b, std::string m, double w, double c, int travel, int diameter)
        : Part(b, m, w, c), travel(travel), diameter(diameter) {}

int Suspension::getTravel() const {
    return this->travel;
}

int Suspension::getDiameter() const {
    return this->diameter;
}