   
#include "Part.h"

Part::Part(std::string b, std::string m, double w, double c) : brand(b), model(m), weight(w), cost(c) {}

std::string Part::getBrand() const   { return this->brand; }
std::string Part::getModel() const   { return this->model; }
double Part::getWeight() const    { return this->weight; }
double Part::getCost() const        { return this->cost; }

void Part::baseDisplay() const{
    std::cout << "Part: " << this->brand << " " << this->model << "\n";
}

Part::~Part() {}
