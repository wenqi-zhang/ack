.define _chmod
.extern _chmod
.text
_chmod:
tst.b -40(sp)
link	a6,#-0
move.w 12(a6), d2
ext.l d2
move.l d2,-(sp)
move.l 8(a6),-(sp)
jsr __Schmod
add.l #8,sp
unlk a6
rts
__Schmod:		trap #0
.short	0xF
			bcc	1f
			jmp	cerror
1:
			clr.l	d0
			rts
