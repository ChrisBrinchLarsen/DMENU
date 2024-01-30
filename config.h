/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 250; 	            /* minimum width when centered        */
static const unsigned int alpha = 0xA6;     /* Amount of opacity. 0xff is opaque  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"RobotoMono Nerd Font:style=Bold:pixelsize=16:antialias=true:autohint=true",
	//"Fira Code:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                   fg         bg       */
	[SchemeNorm] = { "#30FFA4", "#031624" },
	[SchemeSel] = { "#031624", "#30FFA4" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight]= { "#ffc978", "#222222" },
	[SchemeOut] = { "#30FFA4", "#044B4A" },
	[SchemeBorder] = { "#30FFA4", NULL },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;

