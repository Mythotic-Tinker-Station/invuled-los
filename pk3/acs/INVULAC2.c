#library "INVULAC2"
#include "zcommon.acs"


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ++++++++++                HudDisplay altered by UnTrustable                +++++++++++
// ++++++++++                                                                 +++++++++++
// ++++++++++                                                                 +++++++++++
// ++++++++++                  Original code was done by Tib                  +++++++++++
// ++++++++++     Thanks Tib and Mifu for the help of understanding ACC       +++++++++++
// ++++++++++                                                                 +++++++++++
// ++++++++++       (And AlterWorldRuler for some explaining on forum)        +++++++++++
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// Begin of HudDisplay

str color0 = "\cm"; // default color is set to Black, just in case somehow the colors are not being set
str color1 = "\cm"; // by the Hud_Display function
str color2 = "\cm";
str color3 = "\cm";
str color4 = "\cm";

// i know somehow this function setting can be simplyfied with a 'FOR' command, so if you can do it, please do.

function void HUD_DisplayEx(int hudcolor, int mapnamecolor, str mapname, int authornamecolor, str author, int negativedifficultycolor, int positivedifficultycolor, int difficultylevel)
{

    switch(hudcolor)
    {
        case 0:
            color0 = "\cm"; // Black
            break;
        case 1:
            color0 = "\ca"; // Reddish Brick
            break;
        case 2:
            color0 = "\cb"; // Tan
            break;
        case 3:
            color0 = "\cc"; // White
            break;
        case 4:
            color0 = "\cd"; // Green
            break;
        case 5:
            color0 = "\ce"; // Brown
            break;
        case 6:
            color0 = "\cf"; // Gold
            break;
        case 7:
            color0 = "\cg"; // Red
            break;
        case 8:
            color0 = "\ch"; // Blue
            break;
        case 9:
            color0 = "\ci"; // Orange
            break;
        case 10:
            color0 = "\cj"; // White
            break;
        case 11:
            color0 = "\ck"; // Yellow
            break;
        case 12:
            color0 = "\cl"; // Red
            break;
        case 13:
            color0 = "\cn"; // Sky Blue
            break;
        case 14:
            color0 = "\co"; // Beige
            break;
        case 15:
            color0 = "\cp"; // Olive
            break;
        case 16:
            color0 = "\cq"; // Dark Green
            break;
        case 17:
            color0 = "\cr"; // Dark Red
            break;
        case 18:
            color0 = "\cs"; // Brown
            break;
        case 19:
            color0 = "\ct"; // Purple
            break;
        case 20:
            color0 = "\cu"; // Grey
            break;
    }

    switch(mapnamecolor)
    {
        case 0:
            color1 = "\cm"; // Black
            break;
        case 1:
            color1 = "\ca"; // Reddish Brick
            break;
        case 2:
            color1 = "\cb"; // Tan
            break;
        case 3:
            color1 = "\cc"; // White
            break;
        case 4:
            color1 = "\cd"; // Green
            break;
        case 5:
            color1 = "\ce"; // Brown
            break;
        case 6:
            color1 = "\cf"; // Gold
            break;
        case 7:
            color1 = "\cg"; // Red
            break;
        case 8:
            color1 = "\ch"; // Blue
            break;
        case 9:
            color1 = "\ci"; // Orange
            break;
        case 10:
            color1 = "\cj"; // White
            break;
        case 11:
            color1 = "\ck"; // Yellow
            break;
        case 12:
            color1 = "\cl"; // Red
            break;
        case 13:
            color1 = "\cn"; // Sky Blue
            break;
        case 14:
            color1 = "\co"; // Beige
            break;
        case 15:
            color1 = "\cp"; // Olive
            break;
        case 16:
            color1 = "\cq"; // Dark Green
            break;
        case 17:
            color1 = "\cr"; // Dark Red
            break;
        case 18:
            color1 = "\cs"; // Brown
            break;
        case 19:
            color1 = "\ct"; // Purple
            break;
        case 20:
            color1 = "\cu"; // Grey
            break;
    }
    
    switch(authornamecolor)
    {
        case 0:
            color2 = "\cm"; // Black
            break;
        case 1:
            color2 = "\ca"; // Reddish Brick
            break;
        case 2:
            color2 = "\cb"; // Tan
            break;
        case 3:
            color2 = "\cc"; // White
            break;
        case 4:
            color2 = "\cd"; // Green
            break;
        case 5:
            color2 = "\ce"; // Brown
            break;
        case 6:
            color2 = "\cf"; // Gold
            break;
        case 7:
            color2 = "\cg"; // Red
            break;
        case 8:
            color2 = "\ch"; // Blue
            break;
        case 9:
            color2 = "\ci"; // Orange
            break;
        case 10:
            color2 = "\cj"; // White
            break;
        case 11:
            color2 = "\ck"; // Yellow
            break;
        case 12:
            color2 = "\cl"; // Red
            break;
        case 13:
            color2 = "\cn"; // Sky Blue
            break;
        case 14:
            color2 = "\co"; // Beige
            break;
        case 15:
            color2 = "\cp"; // Olive
            break;
        case 16:
            color2 = "\cq"; // Dark Green
            break;
        case 17:
            color2 = "\cr"; // Dark Red
            break;
        case 18:
            color2 = "\cs"; // Brown
            break;
        case 19:
            color2 = "\ct"; // Purple
            break;
        case 20:
            color2 = "\cu"; // Grey
            break;
    }
    
    switch(negativedifficultycolor)
    {
        case 0:
            color3 = "\cm"; // Black
            break;
        case 1:
            color3 = "\ca"; // Reddish Brick
            break;
        case 2:
            color3 = "\cb"; // Tan
            break;
        case 3:
            color3 = "\cc"; // White
            break;
        case 4:
            color3 = "\cd"; // Green
            break;
        case 5:
            color3 = "\ce"; // Brown
            break;
        case 6:
            color3 = "\cf"; // Gold
            break;
        case 7:
            color3 = "\cg"; // Red
            break;
        case 8:
            color3 = "\ch"; // Blue
            break;
        case 9:
            color3 = "\ci"; // Orange
            break;
        case 10:
            color3 = "\cj"; // White
            break;
        case 11:
            color3 = "\ck"; // Yellow
            break;
        case 12:
            color3 = "\cl"; // Red
            break;
        case 13:
            color3 = "\cn"; // Sky Blue
            break;
        case 14:
            color3 = "\co"; // Beige
            break;
        case 15:
            color3 = "\cp"; // Olive
            break;
        case 16:
            color3 = "\cq"; // Dark Green
            break;
        case 17:
            color3 = "\cr"; // Dark Red
            break;
        case 18:
            color3 = "\cs"; // Brown
            break;
        case 19:
            color3 = "\ct"; // Purple
            break;
        case 20:
            color3 = "\cu"; // Grey
            break;
    }
    
    switch(positivedifficultycolor)
    {
        case 0:
            color4 = "\cm"; // Black
            break;
        case 1:
            color4 = "\ca"; // Reddish Brick
            break;
        case 2:
            color4 = "\cb"; // Tan
            break;
        case 3:
            color4 = "\cc"; // White
            break;
        case 4:
            color4 = "\cd"; // Green
            break;
        case 5:
            color4 = "\ce"; // Brown
            break;
        case 6:
            color4 = "\cf"; // Gold
            break;
        case 7:
            color4 = "\cg"; // Red
            break;
        case 8:
            color4 = "\ch"; // Blue
            break;
        case 9:
            color4 = "\ci"; // Orange
            break;
        case 10:
            color4 = "\cj"; // White
            break;
        case 11:
            color4 = "\ck"; // Yellow
            break;
        case 12:
            color4 = "\cl"; // Red
            break;
        case 13:
            color4 = "\cn"; // Sky Blue
            break;
        case 14:
            color4 = "\co"; // Beige
            break;
        case 15:
            color4 = "\cp"; // Olive
            break;
        case 16:
            color4 = "\cq"; // Dark Green
            break;
        case 17:
            color4 = "\cr"; // Dark Red
            break;
        case 18:
            color4 = "\cs"; // Brown
            break;
        case 19:
            color4 = "\ct"; // Purple
            break;
        case 20:
            color4 = "\cu"; // Grey
            break;
    }
    
	switch(difficultylevel)
	{
		case 0:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color3, s:"-----", s: color0, s:"] (none)";							HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
		case 1:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color4, s:"+", s: color3, s:"----", s: color0, s:"] (very easy)"; 						HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
		case 2:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color4, s:"++", s: color3, s:"---", s: color0, s:"] (easy)"; 							HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
		case 3:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color4, s:"+++", s: color3, s:"--", s: color0, s:"] (medium)"; 						HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
		case 4:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color4, s:"++++", s: color3, s:"-", s: color0, s:"] (hard)"; 							HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
		case 5:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color4, s:"+++++", s: color0, s:"] (hardcore)"; 							HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
		case 6:
			hudmessage(s: color1, s: mapname, s: color0, s:" by ", s: color2, s:author, s:"\n\n", s: color0, s:"Difficulty: [", s: color4, s:"?????", s: color0, s:"] (what the fuck!?)"; 						HUDMSG_FADEOUT, 99, cr_blue, 0.05, 0.8, 10.0);
			break;
	}
}

// End of HudDisplay

// Function AssignPlayerToTag(void) by Zalewa

Function int AssignPlayerToTag(void)
{
    int iReturn;
    if (Playernumber() < 8)
        iReturn = PlayerNumber()+1;
    else
        iReturn = random(1, 32);
    return iReturn;
}
