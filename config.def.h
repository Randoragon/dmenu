/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;        /* -b  option; if 0, dmenu appears at bottom          */
static int fuzzy  = 0;        /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Bitstream Vera Sans Mono:size=11:antialias=true",
    "Font Awesome 5 Free Solid:fontformat=truetype:size=11:antialias=true",
    "Font Awesome 5 Brands Regular:fontformat=truetype:size=11:antialias=true",
    "JoyPixels:size=11:antialias=true",
    "DejaVu Sans Mono:size=11:antialias=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*                        fg         bg       */
    [SchemeNorm]          = { "#bbbbbb", "#050505" },
    [SchemeSel]           = { "#050505", "#ffb52a" },
    [SchemeSelHighlight]  = { "#121212", "#fff02a" },
    [SchemeNormHighlight] = { "#ffb52a", "#050505" },
    [SchemeOut]           = { "#6effbc", "#050505" },
    [SchemeNumbers]       = { "#c0c0c0", "#363636" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
