/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#import "masterConfig.h"

static int topbar = topOrBottom;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = dmenuCentered;                    /* -c option; centers dmenu on screen */
static int min_width = dmenuMinWidth; 	            /* minimum width when centered        */
static const unsigned int alpha = dmenuAlpha;     /* Amount of opacity. 0xff is opaque  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	dmenuFont,
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                   fg         bg       */
	[SchemeNorm] = { mainColorLight, mainColorDark },
	[SchemeSel] = { mainColorDark, mainColorLight},
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight]= { "#ffc978", "#222222" },
	[SchemeOut] = { mainColorLight, mainColorLessDark },
	[SchemeBorder] = { mainColorLight, NULL },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = dmenuLines;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = dmenuBorderWidth;

