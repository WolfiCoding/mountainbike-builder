
#include "Frame.h"
#include "Break.h"
#include "Wheel.h"

int main(){
    Frame frame("Specialized Enduro", 4.5, 4000);

    Part* ptr = &frame;
    ptr->display();

    return 0;
}