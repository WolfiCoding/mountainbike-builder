#pragma once

#include "Gears.h"
#include "Chain.h"

class Drivetrain : public Part {

private:
    Gears gears;
    Chain chain;

public:
    Drivetrain(const Gears& g, const Chain& c);
    
    //overrides
    void display() const override;

};
