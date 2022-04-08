//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/  /*Command*/                         /*Update Interval*/   /*Update Signal*/
	{" ",    "btunotifs",                        0,                    7},
	{" ",    "todocount",                        0,                    9},
	{" ",    "pacman -Qu | wc -l",               0,                    8},	
	{" ",    "memp",                             10,                   0},
	{" ",    "pamixer --get-volume-human",       0,                   10},
	{" ",    "date '+%a, %d %b %I:%M:%S %p'",    1,                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
