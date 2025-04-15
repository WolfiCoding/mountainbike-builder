
#include "Chain.h"

Chain::Chain(std::string b, std::string m, double w, double c, int length, int speedCompatibility) 
        : Part(b, m, w, c), length(length), speedCompatibility(speedCompatibility) {}

void Chain::display() const {
    std::cout << " /Chain details"
    << "\n| Brand: " << this->getBrand()
    << "\n| Model: " << this->getModel()
    << "\n| lenght: " << this->length << " links"
    << "\n| Compatibility: Compatible with " << this->speedCompatibility << "-speed drivetrains"
    << "\n| Weight: " << this->getWeight() << "kg"
    << "\n| Price: " << this->getCost() << " Eur\n\n";
}