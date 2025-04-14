
#include "Break.h"

Break::Break(std::string n, std::string m, double w, double c) 
        : Part(n, m, w, c) {}

void Break::display() const {
    std::cout << "Part Type: Break"
                  << "\nBrand: " << this->getBrand()
                  << "\nModel: " << this->getModel()
                  << "\nWeight: " << this->getWeight() 
                  << "kg\nCost: " << this->getCost() << " EUR\n\n";
}