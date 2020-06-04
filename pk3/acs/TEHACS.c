#library "TEHACS"
#include "zcommon.acs"

function void printmapname(str s1, str s2, int f_fTime)
{
	setfont("bigfont");
	hudmessage(s:s1; HUDMSG_FADEOUT, 0, CR_GOLD, 0.5, 0.84, f_fTime);
	setfont("smallfont");
	hudmessage(s:"\cgby \cc", s:s2; HUDMSG_FADEOUT, 0, CR_RED, 0.5, 0.88, f_fTime);
}

script 700 (int x)
{
	thrustthing(x*256/360, 20, 0, 0);
}