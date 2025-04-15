#pragma once

#include "Suspension.h"

class FrontSus : public Suspension{
    private:

    public:
        FrontSus(std::string brand, std::string model, double weight, double cost, int travel);

        //overrides
        void adjustSag(double riderWeight) const override;
        void display() const override;
};
