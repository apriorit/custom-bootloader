;------------------------------------------------------------
.286							   ; CPU type
;------------------------------------------------------------
.model TINY						   ; memory of model
;---------------------- EXTERNS -----------------------------
extrn				_BootMain:near	   ; prototype of C func
;------------------------------------------------------------
;------------------------------------------------------------   
.code   
org				07c00h		   ; for BootSector
main:
				jmp short start	   ; go to main
				nop
						
;----------------------- CODE SEGMENT -----------------------
start:	
        cli
        mov ax,cs               ; Setup segment registers
        mov ds,ax               ; Make DS correct
        mov es,ax               ; Make ES correct
        mov ss,ax               ; Make SS correct        
        mov bp,7c00h
        mov sp,7c00h            ; Setup a stack
        sti
                                ; start the program 
        call           _BootMain
        ret
        
        END main                ; End of program
