#ifndef Wheel_H
#define Wheel_H

#include "Part.h"

class Wheel : public Part {
    private:
        double diameter;
        double width;
        std::string material;

    public:
        Wheel(std::string brand, std::string model, double weight, double cost, double diameter);
        double getDiameter(){
            return diameter;
        }
        double getWith(){
            return width;
        }
        void display() const override;


};

#endif