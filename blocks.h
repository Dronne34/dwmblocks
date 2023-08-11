//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

	/*Icon*/              /*Command*/	 	  /*Update Interval*/	/*Update Signal*/

    {" 🎷 ",               "sb-music",	               2,		          1},

    {" 🔆 ",               "sb-backlight",		       2,		          0},

	{" ",                  "sb-volume",		           2,		          0},

	{"  ",                 "sb-cpu",                   10,	              9},
	
	{" 💊 ",               "memory",	               10,		          1},

	{" PK ",               "sb-pacpackages",           90,		          10},
 
	{" 📅 ",               "sb-clock",	               60,	              0},

	{" ",                  "sb-battery",	           60,	              0},

	{" 󾓦 ",               "sb-kbselect",	           90,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';