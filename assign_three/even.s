     AREA     arreven, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
		MOV R0, #0x20000000   ;LOADING DATA INTO MEMORY ARRAY LENGTH=6
		MOV R1, #0x5
		STR R1,[R0, #0x5]
		MOV R2, #0x2
		STR R2, [R0, #0xA]
		MOV R2, #0x7
		STR R2, [R0, #0xF]
		MOV R2, #0x20
		STR R2, [R0, #0x14]
		MOV R2, #0x8
		STR R2, [R0, #0x19]
		MOV R2, #0x15
		STR R2, [R0, #0x1E]
		MOV R4, #0x0
		MOV R1, #0x5
		MOV R5, #0x2
LOOPA
        LDR R2, [R0, R1]
		udiv R3,R2,R5
		mls R3,R3,R5,R2
		CMP R3,#0x0
		IT EQ
		ADDEQ R4,R4,#0x1
		ADD R1,R1,#0x5
		CMP R1,#0x1E
		IT LE
		BLE LOOPA
		MOV R0,R4
		BL printMsg
stop    B stop ; stop program
        ENDFUNC
        END
		