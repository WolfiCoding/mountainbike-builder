#include "RearSus.h"

RearSus::RearSus(std::string b, std::string m, double w, double c, int travel, std::string type)
            : Suspension(b, m, w, c, travel), type(type) {}

void RearSus::display() const {
    std::cout << " /Part type: Rear Suspension"
    << "\n| Name: " << this->getBrand() << " " << this->getModel()
    << "\n| Type: " << this->type << "-Suspension"
    << "\n| Travel: " << this->getTravel() << "mm"
    << "\n| Weight: " << this->getWeight() << "kg"
    << "\n| Price: " << this->getCost() << " Eur\n\n";
}

std::string RearSus::getType() const {
    return this->type;
}

void RearSus::adjustSag(double riderWeight) const {
    double sag = this->getTravel() * 0.25; //calculating sag with target Sag (25%)
    //double suggestedPsi = (riderWeight * 2.2); //sag = ca. rider wheight in lbs

    std::cout << "Target sag: " << sag << " mm\n";
    //std::cout << "Suggested pressure: " << suggestedPsi << " psi\n";
}