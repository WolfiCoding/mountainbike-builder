#ifndef Wheel_H
#define Wheel_H

#include "Part.h"

class Wheel : public Part {

    public:
        Wheel(std::string name, double weight, double cost);

        void display() const override;


};

#endif