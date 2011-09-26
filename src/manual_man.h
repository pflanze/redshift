/* values starting with q5da5t8ah_ are postprocessed by manual_filter.pl */

/* man-only special headers */
#define _TH(...) .TH __VA_ARGS__
#define _SH(...) .SH __VA_ARGS__

/* hardcode for now */
#define PROGRAM_NAME .B redshift q5da5t8ah_EOL

/* output */
#define OMAN(...) q5da5t8ah_DEQUOTE(__VA_ARGS__)
#define OHELP(...)
#define O(...) q5da5t8ah_DEQUOTE(__VA_ARGS__)
#define O_FORMAT(...) q5da5t8ah_DEQUOTEFORMAT(__VA_ARGS__)
#define OPTION(x,y) .TP q5da5t8ah_EOL O(_fB(x)) q5da5t8ah_EOL O(y)

/* formatting */
#define _fB(x) \fB q5da5t8ah_SLURPSPACE x \fR q5da5t8ah_SLURPSPACE
#define _fI(x) \fI q5da5t8ah_SLURPSPACE x \fR q5da5t8ah_SLURPSPACE
#define _PP .PP 
#define _IP .IP 

/* for multi-statement switches */
#define MAN 1
#define HELP 0
