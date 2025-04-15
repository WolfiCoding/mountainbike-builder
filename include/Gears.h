#pragma once

#include "Part.h"

class Gears : public Part {

private:
    int gearCount;
    int minTooth;
    int maxTooth;
    std::string material;

public:
    Gears(std::string brand, std::string model, double weight, double cost, int gearCount, int minTooth, int maxTooth, std::string material);
    int gearRange() const;

    //overrides
    void display() const override;
};
