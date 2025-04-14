#ifndef Break_H
#define Break_H

#include "Part.h"

class Break : public Part {

    public:
        Break(std::string name, double weight, double cost);

        void display() const override;


};

#endif