// MT Engine MK2 v0.90b
// Copyleft 2016 the Mojon Twins

// pantallas.h
// Fixed, compressed screens

#ifndef MODE_128K
extern unsigned char s_title [];
extern unsigned char s_marco [];
extern unsigned char s_ending [];

#asm
	._s_title
		BINARY "../bin/title.bin"
	._s_marco
#endasm
#ifndef DIRECT_TO_PLAY
#asm
		BINARY "../bin/marco.bin"
#endasm
#endif
#asm
	._s_ending
		BINARY "../bin/ending.bin"
#endasm
#endif
/*
void blackout (void) {
	#asm
		ld hl, 22528
		ld (hl), 0
		push hl
		pop de
		inc de
		ld bc, 767
		ldir
	#endasm
}
*/
