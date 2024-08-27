//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/  /*Command*/                      /*Update Interval*/   /*Update Signal*/
	{" ",    "pacman -Qu | wc -l",            0,                    8},	
	{" ",    "memp",                          10,                   0},
	{" ",    "pamixer --get-volume-human",    0,                   10},
	{"",      "date '+%a %d %b %I:%M %p'",     5,                    0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
