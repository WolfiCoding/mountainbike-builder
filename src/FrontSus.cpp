
#include "FrontSus.h"

FrontSus::FrontSus(std::string b, std::string m, double w, double c, int travel)
            : Suspension(b, m, w, c, travel) {}

void FrontSus::display() const {
    std::cout << " /Part typpe: Fronst Suspension"
    << "\n| Name: " << this->getBrand() << " " << this->getModel()
    << "\n| Travel: " << this->getTravel() << "mm"
    << "\n| Weight: " << this->getWeight() << "kg"
    << "\n| Price: " << this->getCost() << " Eur\n\n";
}

void FrontSus::adjustSag(double riderWeight) const {
    double sag = this->getTravel() * 0.25; //calculating sag with target Sag (25%)
    //double suggestedPsi = (riderWeight * 2.2); //sag = ca. rider wheight in lbs

    std::cout << "Target sag: " << sag << " mm\n";
    //std::cout << "Suggested pressure: " << suggestedPsi << " psi\n";
}