#pragma once
#include "Suspension.h"

class RearSus : public Suspension{

    private:
        std::string type; //Air/Coil
    public:
        RearSus(std::string brand, std::string model, double weight, double cost, int travel, std::string type);
        std::string getType() const;

        //Overrides
        void display() const override;
        void adjustSag(double riderWeight) const override;
};
