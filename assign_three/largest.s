     AREA     largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION
		MOV R0, #0x5
		MOV R1, #0x20
		MOV R2, #0x12
		MOV R5, #0x20000000   ;Base address where the largest number will be stored
		CMP R0,R1
		ITE GE
		CMPGE R0,R2
		BLT  dl
		ITE GE
		MOVGE R4,R0
		MOVLT R4,R2
dl 
        CMP R1,R2		
		ITE GE
		MOVGE R4,R1
		MOVLT R4,R2
		STR  R4,[R5]
		MOV R0,R4
		BL printMsg
stop    B stop ; stop program
        ENDFUNC
        END 
		
		
          
