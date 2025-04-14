#include "Wheel.h"

Wheel::Wheel(std::string b, std::string m, double w, double c, double d) 
        : Part(b, m, w, c), diameter(d) {}

void Wheel::display() const {
    std::cout << "Part Type: Wheel"
                  << "\nBrand: " << this->getBrand()
                  << "\nModel: " << this->getModel()
                  << "\nWeight: " << this->getWeight()
                  << "\nDiameter: " << this->diameter
                  << "kg\nCost: " << this->getCost() << " EUR\n\n";
}