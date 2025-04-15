#include "Wheel.h"

Wheel::Wheel(std::string b, std::string m, double w, double c, double diameter, double width, std::string material) 
        : Part(b, m, w, c), diameter(diameter), width(width), material(material) {}


void Wheel::display() const {
    std::cout << " /Part typpe: Wheel"
    << "\n| Name: " << this->getBrand() << " " << this->getModel()
    << "\n| Diameter: " << this->diameter << "in"
    << "\n| Width: " << this->width << "in"
    << "\n| Material: " << this->material
    << "\n| Weight: " << this->getWeight() << "kg"
    << "\n| Price: " << this->getCost() << "Eur\n\n";
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