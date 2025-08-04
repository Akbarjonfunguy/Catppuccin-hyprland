static const char norm_fg[] = "#c7c7ca";
static const char norm_bg[] = "#20222c";
static const char norm_border[] = "#66697c";

static const char sel_fg[] = "#c7c7ca";
static const char sel_bg[] = "#A19BAA";
static const char sel_border[] = "#c7c7ca";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
