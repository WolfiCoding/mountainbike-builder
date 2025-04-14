#ifndef Break_H
#define Break_H

#include "Part.h"

class Break : public Part {

    public:
        Break(std::string name, std::string model, double weight, double cost);

        void display() const override;


};

#endif