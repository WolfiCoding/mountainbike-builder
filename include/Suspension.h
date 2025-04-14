#ifndef Suspension_H
#define Suspension_H

#include "Part.h"

class Suspension : public Part{

    private:
        int travel;
        int diameter;

    public:
        Suspension(std::string brand, std::string model, double weight, double cost, int travel, int diameter);
        int getTravel() const;
        int getDiameter() const;
        virtual void display() const = 0;

};

#endif