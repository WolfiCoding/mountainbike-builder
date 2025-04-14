
#include "Frame.h"
#include "Break.h"
#include "Wheel.h"

int main(){
    Frame frame("Specialized Enduro", 4.5, 4000);
    Break b("Magura MT7 PRO", 0.5, 300);
    Wheel w("Roval", 3, 500);

    frame.display();
    b.display();
    w.display();
    std::cin.get();
    return 0;
}