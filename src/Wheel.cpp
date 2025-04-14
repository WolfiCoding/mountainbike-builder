#include "Wheel.h"

Wheel::Wheel(std::string b, std::string m, double w, double c, double diameter, double width, std::string material) 
        : Part(b, m, w, c), diameter(diameter), width(width), material(material) {}

void Wheel::display() const {
    std::cout << "Part Type: Wheel"
                  << "\nBrand: " << this->getBrand()
                  << "\nModel: " << this->getModel()
                  << "\nWeight: " << this->getWeight()
                  << "\nMaterial: " << this->material
                  << "\nDiameter: " << this->diameter
                  << "\nWidth: " << this->width
                  << "kg\nCost: " << this->getCost() << " EUR\n\n";
}

double Wheel::getDiameter() const {
    return this->diameter;
}

double Wheel::getWidth() const {
    return this->width;
}

std::string Wheel::getMaterial() const {
    return this->material;
}