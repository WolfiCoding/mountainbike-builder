#include "Chain.h"
#include "Gears.h"
#include "FrontSus.h"
#include "RearSus.h"
#include "Break.h"
#include "Frame.h"
#include "Wheel.h"
#include "Drivetrain.h"

int main() {
    Part* parts[6];
    //Frame
    Frame frame("Specialized", "Enduro", 4, 4000, "Carbon");

    //Suspension
    FrontSus frontSus("Fox", "38 Factory", 2, 1300, 170);
    RearSus rearSus("Fox", "Float Factory", 1.5, 1200, 170, "Air");

    //Break
    Break brake("Magura", "MT7 Pro", 0.5, 300);

    //Wheel
    Wheel wheel("Roval", "r29", 5, 500, 29, 2.5, "Alloy");

    //Drivetrain
    Gears myGears("Shimano", "XT", 0.45, 180, 10, 51, 100, "carbon");
    Chain myChain("SRAM", "GX", 0.25, 60, 50, 12);

    Drivetrain myDrivetrain(myGears, myChain);

    parts[0] = &frame;
    parts[1] = &frontSus;
    parts[2] = &rearSus;
    parts[3] = &brake;
    parts[4] = &wheel;
    parts[5] = &myDrivetrain;
    
    for(Part* p : parts) {
        p->baseDisplay();
    }

    return 0;
}