// CDisplay.cpp

#include "CDisplay.h"

void CDisplay::TextOut( 
        const char far* inStrSource, 
        byte            inX, 
        byte            inY,  
        byte            inBackgroundColor, 
        byte            inTextColor,
        bool            inUpdateCursor
        )
{
    byte textAttribute = ((inTextColor) | (inBackgroundColor << 4));
    byte lengthOfString = CString::Strlen(inStrSource);

    __asm
    {		
        push	bp
        mov		al, inUpdateCursor
        xor		bh, bh	
        mov		bl, textAttribute
        xor		cx, cx
        mov		cl, lengthOfString
        mov		dh, inY
        mov		dl, inX  
        mov     es, word ptr[inStrSource + 2]
        mov     bp, word ptr[inStrSource]
        mov		ah,	13h
        int		10h
        pop		bp
    }
}
void CDisplay::ClearScreen()
{
    __asm
    {
        mov     al, 02h
        mov     ah, 00h
        int     10h
    } 
}

void CDisplay::ShowCursor(
        bool inMode
        )
                                 
{
    byte flag = inMode ? 0 : 0x32;

    __asm
    {
        mov     ch, flag
        mov     cl, 0Ah
        mov     ah, 01h
        int     10h
    }
}
