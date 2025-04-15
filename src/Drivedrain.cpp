
#include "Drivetrain.h"

Drivetrain::Drivetrain(const Gears& g, const Chain& c)
        : Part("Drivetrain", "Standart", g.getWeight() + c.getWeight(), g.getCost() + c.getCost()),
          gears(g), chain(c) {}

void Drivetrain::display() const {
    std::cout << "----- Drivetrain -----\n";
    this->gears.display();
    this->chain.display();
}