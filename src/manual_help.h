/* man-only special headers */
#define _TH(x)
#define _SH(x)

/* take value from argument of help function */
#define PROGRAM_NAME program_name

/* output */
#define OMAN(...)
#define OHELP(...) fputs(__VA_ARGS__, stdout);
#define O(...) fputs(__VA_ARGS__, stdout);
#define O_FORMAT(...) printf(__VA_ARGS__);
#define OPTION(x,y) O(x "  \t") O(y)

/* formatting */
#define _fI(x) x
#define _PP
#define _IP

/* for multi-statement switches */
#define MAN 0
#define HELP 1
