#pragma once

#include "Part.h"

class Suspension : public Part{

    private:
        int travel; //in mm
        


    public:
        Suspension(std::string brand, std::string model, double weight, double cost, int travel);
        
        int getTravel() const;
        
        virtual void adjustSag(double riderWeight) const = 0;
        //virtual void display() const = 0; not implemented -> this class is abstract

};
