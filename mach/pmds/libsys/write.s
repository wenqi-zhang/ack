.define _write
.extern _write
.text
_write:
tst.b -40(sp)
link	a6,#-0
move.w 14(a6), d2
ext.l d2
move.w 8(a6), d1
ext.l d1
move.l d2,-(sp)
move.l 10(a6),-(sp)
move.l d1,-(sp)
jsr __Swrite
lea 12(sp),sp
unlk a6
rts
__Swrite:		trap #0
.short	0x4
			bcc	1f
			jmp	cerror
1:
			rts
