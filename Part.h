#ifndef Part_h
#define Part_h

#include <iostream>
#include <string>

class Part{
    private:
        std::string name;
        double weight;
        double cost;

    public:
        Part(std::string n, double w, double c);
        virtual ~Part();
        
        std::string getName() const;
        double getWeight() const;
        double getCost() const;

        virtual void display() const = 0;
};

#endif