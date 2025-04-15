#pragma once

#include "Part.h"

class Chain : public Part {

private:
    int length; //chain links
    int speedCompatibility; //11-Speed or 12-Speed

public:
    Chain(std::string brand, std::string model, double weight, double cost, int length, int speedCompatiblity);

    //overrides
    void display() const override;
};

