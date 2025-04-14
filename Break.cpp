
#include "Break.h"

Break::Break(std::string n, double w, double c) : Part(n, w, c) {}

void Break::display() const {
    std::cout << "Part Type: Break"
                  << "\nName: " << this->getName() 
                  << "\nWeight: " << this->getWeight() 
                  << "kg\nCost: " << this->getCost() << " EUR\n\n";
}