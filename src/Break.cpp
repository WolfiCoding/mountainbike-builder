
#include "Break.h"

Break::Break(std::string n, std::string m, double w, double c) 
        : Part(n, m, w, c) {}


void Break::display() const {
        std::cout << " /Part typpe: Break"
        << "\n| Name: " << this->getBrand() << " " << this->getModel()
        << "\n| Weight: " << this->getWeight() << "kg"
        << "\n| Price: " << this->getCost() << " Eur\n\n";
}