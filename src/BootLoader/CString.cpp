// CString.cpp

#include "CString.h"

byte CString::Strlen(
        const char far* inStrSource 
        )
{
        byte lenghtOfString = 0;
        
        while(*inStrSource++ != '\0')
        {
            ++lenghtOfString;
        }

        return lenghtOfString;
}
