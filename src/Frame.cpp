
#include "Frame.h"

Frame::Frame(std::string n, std::string m, double w, double c)
        : Part(n, m, w, c) {}

void Frame::display() const {
    std::cout << "Part Type: Frame"
                  << "\nName: " << this->getBrand()
                  << "\nModel: " << this->getModel()
                  << "\nWeight: " << this->getWeight() 
                  << "kg\nCost: " << this->getCost() << " EUR\n\n";

}