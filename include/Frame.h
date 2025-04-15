#pragma once

#include "Part.h"

class Frame : public Part {
    private:
        std::string material;
    public:
        Frame(std::string name, std::string model, double weight, double cost, std::string material);

        void display() const override;

};

