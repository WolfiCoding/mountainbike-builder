
#include "Gears.h"

Gears::Gears(std::string b, std::string m, double w, double c, int gearCount, int minTooth, int maxTooth, std::string material)
        : Part(b, m, w, c), gearCount(gearCount), minTooth(minTooth), maxTooth(maxTooth), material(material) {}

int Gears::gearRange() const{
    return (this->maxTooth - this->minTooth);
}

void Gears::display() const {
    std::cout << " /Gear details"
    << "\n| Brand: " << this->getBrand()
    << "\n| Model: " << this->getModel()
    << "\n| Gear Count: " << this->gearCount
    << "\n| Gange: " << this->minTooth << "-" << this->maxTooth << "T"
    << "\n| Weight: " << this->getWeight() << "kg"
    << "\n| Price: " << this->getCost() << " Eur\n\n";
}