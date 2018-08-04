; Blink Led - AndMCU

.autorun

.dump

PORTA   equ 0
PORTB   equ 0x1
PORTC   equ 0x2
DDRA    equ 0x3
DDRB    equ 0x4
DDRC    equ 0x5

TIMER   equ 0xa
CONTROL equ 0xb

.lcd "Blink Led"

init:

  lda #255
  sta DDRA  ; port A output    
  lda #15
  sta DDRC
	
start:	

loop:	

  incx
  stx PORTA 

  decx
  stx PORTA 

  jmp loop
end
