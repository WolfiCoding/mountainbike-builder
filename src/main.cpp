#include "Chain.h"
#include "Gears.h"

#include "Drivetrain.h"

int main() {
    Gears myGears("Shimano", "XT", 0.45, 180, 10, 51, 100, "carbon");
    Chain myChain("SRAM", "GX", 0.25, 60, 50, 12);

    Drivetrain myDrivetrain(myGears, myChain);

    myDrivetrain.display();  // Show a combined view of the drivetrain
    myDrivetrain.baseDisplay();

    return 0;
}