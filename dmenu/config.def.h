/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]          = {
	"Ubuntu:pixelsize=16:antialias=true",
	"NanumGothic:pixselsize=16:hintstyle=hintfull:antialias=true",
	"Font Awesome 5 Free:style=Solid:pixelsize=16:hintstyle=hintslight:antialias=true",
};
static const char *prompt      = "   \xEF\x84\xA0   ";      /* -p  option; prompt to the left of input field */
static const char col_normf[]       = "#E0E0E0";
static const char col_normb[]       = "#171717";
static const char col_highf[]       = "#DDDDDD";
static const char col_highb[]       = "#2B4883";
static const char col_highr[]       = "#0E5AA2";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_normf, col_normb, col_normb },
	[SchemeSel]  = { col_highf, col_highb, col_highr },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 3;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 32;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
