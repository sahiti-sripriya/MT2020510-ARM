     AREA     arreven, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
		MOV R0, #0x20000000
		MOV R1, #0x0
		STR R1, [R0]
		MOV R2, #0x1
	    STR R2, [R0, #0x1]
		MOV R3, #0x2
LOOPA
		ADD R4,R1,R2
		STR R4, [R0,R3]
		MOV R1,R2
		MOV R2,R4
		ADD R3,R3,#0x1
		CMP R3,#0x20
		IT LE
		BLE LOOPA
stop    B stop ; stop program
        ENDFUNC
        END