/* Source to build both the command line help text and the man pages.

   This file is in C preprocessor syntax, and (a) included together
   with manual_help.h in redshift.c to produce the commandline help
   (--help), and (b) included together with manual_man.h in man.c and
   then filtered through manual_filter.pl to build the english man
   page (and its translations).

   The macros:

   _TH and _SH are only output for the man page, and don't need quoted
   arguments. _PP and _IP also output to the man page only, and they
   don't take arguments. These output .TH, .SH, .PP, and .IP
   formatting commands respectively.

   The above macros and all macros starting with the letter 'O' are
   output statements. All text has to be an argument of one of these.

   The macros starting with '_f' are formatting commands only used for
   the man page, and can (must) be contained within other macros.
   
   Additionally, one of the MAN or HELP macros is true, depending on
   which output is generated.  */

_TH(REDSHIFT: "1" "August 2010" "redshift" "User Commands")
_SH(NAME)
OMAN(_("redshift - Set color temperature of display according to time of day."))

_SH(SYNOPSIS)
OHELP(_("Usage: "))
/* TRANSLATORS: help output 1
   LAT is latitude, LON is longitude,
   DAY is temperature at daytime,
   NIGHT is temperature at night
   no-wrap */
O_FORMAT("%s ["_fI("-l LAT:LON")" | "_fI("-l PROVIDER:POPTIONS")"] "
	 "["_fI("-t DAY:NIGHT")"] ["_fI("OPTIONS")"...]\n",
	 PROGRAM_NAME)
O("\n")

_SH(DESCRIPTION)

/* XX: are really two different texts needed for man page and
   help? Anyway, it's easy enough to do..: */

#if MAN

O_FORMAT(_("%s adjusts the color temperature of your screen according to your "
	   "surroundings. This may help your eyes hurt less or reduce the risk for "
	   "delayed sleep phase syndrome if you are working in front of the screen "
	   "at night."),
	PROGRAM_NAME)
O("\n")
O(_("The color temperature is set according to the position of the sun. A "
    "different color temperature is set during night and daytime. During "
    "twilight and early morning, the color temperature transitions smoothly "
    "from night to daytime temperature to allow your eyes to slowly "
    "adapt. (The transition is taking around 50 minutes.)"))
	)

#else

/* TRANSLATORS: help output 2
   no-wrap */
O(_("Set color temperature of display according to time of day.\n"))
O("\n")

#endif

_SH(OPTIONS)
/* TRANSLATORS: help output 3
   no-wrap */
OPTION("-h", _("Display this help message\n"))
OPTION("-v", _("Verbose output\n"))
OPTION("-V", _("Show program version\n"))

OPTION("-b N", _("Screen brightness to apply (max is 1.0)\n"))
OPTION("-c FILE", _("Load settings from specified configuration file\n"))
OPTION("-g R:G:B", _("Additional gamma correction to apply\n"))
OPTION("-l LAT:LON", _("Your current location\n"))
/* TRANSLATORS: help output 4
   `list' must not be translated
   no-wrap */
OPTION("-l PROVIDER", _("Select provider for automatic"
			" location updates\n"
			"  \t\t(Type `list' to see available providers)\n"))
OPTION("-m METHOD", _("Method to use to set color temperature\n"
		      "  \t\t(Type `list' to see available methods)\n"))
OPTION("-o", _("One shot mode (do not continously adjust"
	       " color temperature)\n"))
OPTION("-O TEMP", _("One shot manual mode (set color temperature)\n"))
OPTION("-x", _("Reset mode (remove adjustment from screen)\n"))
OPTION("-r", _("Disable temperature transitions\n"))
OPTION("-t DAY:NIGHT", _("Color temperature to set at daytime/night\n"))
O("\n")

/* TRANSLATORS: help output 5 */
_PP
O_FORMAT(_("The neutral temperature is %uK. Using this value will not\n"
	   "change the color temperature of the display. Setting the\n"
	   "color temperature to a value higher than this results in\n"
	   "more blue light, and setting a lower value will result in\n"
	   "more red light.\n"), NEUTRAL_TEMP)
O("\n")
/* TRANSLATORS: help output 6 */
O(_("Default values:\n\n"))
_IP
O_FORMAT(_("  Daytime temperature: %uK\n"
	   "  Night temperature: %uK\n"),
	 DEFAULT_DAY_TEMP, DEFAULT_NIGHT_TEMP)
O("\n")


#if MAN

_SH(EXAMPLE)
O(_("Example for Copenhagen, Denmark:"))
_IP
O("$ redshift -l 55.7:12.6 -t 5700:3600 -g 0.8 -m vidmode -v")

_SH(AUTHOR)
O_FORMAT(_("%s was written by Jon Lund Steffensen <jonlst@gmail.com>."),
	 PROGRAM_NAME)
_PP
O_FORMAT(_("Both %s and this manual page are released under the "
	   "GNU General Public License, version 3."),
	 PROGRAM_NAME)

#endif


_SH(BUGS)
/* TRANSLATORS: help output 7 */
O_FORMAT(_("Please report bugs to <%s>\n"), PACKAGE_BUGREPORT)

#if MAN

_SH(KNOWN ISSUES)
O(_("Redshift won't affect the color of your cursor when your graphics driver "
    "is configured to use hardware cursors. Some graphics drivers have an "
    "option to disable hardware cursors in xorg.conf."))

#endif
