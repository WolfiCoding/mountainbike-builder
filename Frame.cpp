
#include "Frame.h"

Frame::Frame(std::string name, double weight, double cost) : Part(name, weight, cost) {}

void Frame::display() const {
    std::cout << "Part Type: Frame\nName: " << this->getName() << "\nWeight: " << this->getWeight() << "kg\nCost: " << this->getCost() << "€";

}