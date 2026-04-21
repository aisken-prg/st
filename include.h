static char *font = "Hack Nerd Font:pixelsize=14:antialias=true:autohint=true";

static const char *colorname[] = {
        /* 8 normal colors */
        "black", /* black */
        "red3", /* red */
        "green3", /* green */
        "yellow3", /* yellow */
        "blue2", /* blue */
        "magenta3", /* magenta */
        "cyan3", /* cyan */
        "gray90", /* gray */

        /* 8 bright colors */
        "gray50", /* gray */
        "red", /* red */
        "green", /* green */
        "yellow", /* yellow */
        "#5c5cff", /* blue */
        "magenta", /* magenta */
        "cyan", /* cyan */
        "white", /* white */

        [255] = 0,

        /* more colors can be added after 255 to use with DefaultXX */
        "#cccccc",
        "#555555",
        "gray90", /* default foreground colour */
        "black", /* default background colour */
};
