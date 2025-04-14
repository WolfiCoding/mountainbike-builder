#ifndef RearSus_H
#define RearSus_H

#include "Suspension.h"

class RearSus : public Suspension{

    public:
        RearSus(std::string brand, std::string model, double weight, double cost, int travel, int diameter);

        void display() const override;
};

#endif