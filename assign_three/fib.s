     AREA     arreven, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
		MOV R4, #0x20000000
		MOV R0, #0x0
		BL printMsg
		MOV R6, #0x0
		STR R0, [R4, #0x5]
		MOV R0, #0x1
		BL printMsg
		MOV R7, #0x1
	    STR R0, [R4, #0xA]
		MOV R8, #0xF
LOOPA
		ADD R0,R6,R7
		MOV R5,R0
		BL printMsg
		STR R5, [R4,R8]
		MOV R6,R7
		MOV R7,R5
		ADD R8,R8,#0x5
		CMP R8,#0x64
		IT LE
		BLE LOOPA
stop    B stop ; stop program
        ENDFUNC
        END
