   
#include "Part.h"

Part::Part(std::string n, double w, double c) : name(n), weight(w), cost(c) {}

std::string Part::getName() const   { return this->name; }
double Part::getWeight() const    { return this->weight; }
double Part::getCost() const        { return this->cost; }

Part::~Part() {}
