.define _kill
.extern _kill
.text
_kill:
tst.b -40(sp)
link	a6,#-0
move.w 10(a6), d2
ext.l d2
move.w 8(a6), d1
ext.l d1
move.l d2,-(sp)
move.l d1,-(sp)
jsr __Skill
add.l #8,sp
unlk a6
rts
__Skill:		trap #0
.short	0x25
			bcc	1f
			jmp	cerror
1:
			clr.l	d0
			rts
