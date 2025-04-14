#ifndef Frame_H
#define Frame_H


#include "Part.h"

class Frame : public Part {

    public:
        Frame(std::string name, std::string model, double weight, double cost);

        void display() const override;

};

#endif