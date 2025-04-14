#ifndef FrontSus_H
#define FrontSus_H

#include "Suspension.h"

class FrontSus : public Suspension{

    public:
        FrontSus(std::string brand, std::string model, double weight, double cost, int travel, int diameter);

        void display() const override;
};

#endif