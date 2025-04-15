
#include "Frame.h"

Frame::Frame(std::string n, std::string m, double w, double c, std::string material)
        : Part(n, m, w, c), material(material) {}



void Frame::display() const {
        std::cout << " /Part typpe: Frame"
        << "\n| Name: " << this->getBrand() << " " << this->getModel()
        << "\n| Material: " << this->material
        << "\n| Weight: " << this->getWeight() << "kg"
        << "\n| Price: " << this->getCost() << "Eur";
}