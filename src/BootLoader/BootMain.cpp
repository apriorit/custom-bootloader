// BootMain.cpp

#include "CDisplay.h"

#define HELLO_STR               "\"Hello world...\", from low-level!"

extern "C" void BootMain()
{
    CDisplay::ClearScreen();
    CDisplay::ShowCursor(false);

    CDisplay::TextOut(
        HELLO_STR,
        0,
        0,
        BLACK,
        WHITE,
        false
        );
    
    for(;;);

    return;
}
