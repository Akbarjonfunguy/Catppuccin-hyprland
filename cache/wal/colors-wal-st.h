const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#20222c", /* black   */
  [1] = "#A19BAA", /* red     */
  [2] = "#DFA8AE", /* green   */
  [3] = "#B8D1B5", /* yellow  */
  [4] = "#E3CCB5", /* blue    */
  [5] = "#90AED4", /* magenta */
  [6] = "#96B2D9", /* cyan    */
  [7] = "#c7c7ca", /* white   */

  /* 8 bright colors */
  [8]  = "#66697c",  /* black   */
  [9]  = "#A19BAA",  /* red     */
  [10] = "#DFA8AE", /* green   */
  [11] = "#B8D1B5", /* yellow  */
  [12] = "#E3CCB5", /* blue    */
  [13] = "#90AED4", /* magenta */
  [14] = "#96B2D9", /* cyan    */
  [15] = "#c7c7ca", /* white   */

  /* special colors */
  [256] = "#20222c", /* background */
  [257] = "#c7c7ca", /* foreground */
  [258] = "#c7c7ca",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
