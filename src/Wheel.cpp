#include "Wheel.h"

Wheel::Wheel(std::string n, double w, double c) : Part(n, w, c) {}

void Wheel::display() const {
    std::cout << "Part Type: Wheel"
                  << "\nName: " << this->getName() 
                  << "\nWeight: " << this->getWeight() 
                  << "kg\nCost: " << this->getCost() << " EUR\n\n";
}