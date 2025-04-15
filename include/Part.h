#pragma once

#include <iostream>
#include <string>

class Part{
    private:
        std::string brand;
        std::string model;
        double weight;
        double cost;

    public:
        Part(std::string b, std::string m, double w, double c);
        virtual ~Part();
        
        std::string getBrand() const;
        std::string getModel() const;
        double getWeight() const;
        double getCost() const;
        void baseDisplay() const;

        virtual void display() const = 0;
};