/* TRANSLATORS: help output 1
   LAT is latitude, LON is longitude,
   DAY is temperature at daytime,
   NIGHT is temperature at night
   no-wrap */
printf(_("Usage: %s -l LAT:LON -t DAY:NIGHT [OPTIONS...]\n"),
	program_name);
fputs("\n", stdout);

/* TRANSLATORS: help output 2
   no-wrap */
fputs(_("Set color temperature of display"
	" according to time of day.\n"), stdout);
fputs("\n", stdout);

/* TRANSLATORS: help output 3
   no-wrap */
fputs(_("  -h\t\tDisplay this help message\n"
	"  -v\t\tVerbose output\n"
	"  -V\t\tShow program version\n"), stdout);
fputs("\n", stdout);

/* TRANSLATORS: help output 4
   `list' must not be translated
   no-wrap */
fputs(_("  -b N\t\tScreen brightness to apply (max is 1.0)\n"
	"  -c FILE\tLoad settings from specified configuration file\n"
	"  -g R:G:B\tAdditional gamma correction to apply\n"
	"  -l LAT:LON\tYour current location\n"
	"  -l PROVIDER\tSelect provider for automatic"
	" location updates\n"
	"  \t\t(Type `list' to see available providers)\n"
	"  -m METHOD\tMethod to use to set color temperature\n"
	"  \t\t(Type `list' to see available methods)\n"
	"  -o\t\tOne shot mode (do not continously adjust"
	" color temperature)\n"
	"  -O TEMP\tOne shot manual mode (set color temperature)\n"
	"  -x\t\tReset mode (remove adjustment from screen)\n"
	"  -r\t\tDisable temperature transitions\n"
	"  -t DAY:NIGHT\tColor temperature to set at daytime/night\n"),
      stdout);
fputs("\n", stdout);

/* TRANSLATORS: help output 5 */
printf(_("The neutral temperature is %uK. Using this value will not\n"
	 "change the color temperature of the display. Setting the\n"
	 "color temperature to a value higher than this results in\n"
	 "more blue light, and setting a lower value will result in\n"
	 "more red light.\n"),
	 NEUTRAL_TEMP);

fputs("\n", stdout);

/* TRANSLATORS: help output 6 */
printf(_("Default values:\n\n"
	 "  Daytime temperature: %uK\n"
	 "  Night temperature: %uK\n"),
       DEFAULT_DAY_TEMP, DEFAULT_NIGHT_TEMP);

fputs("\n", stdout);

/* TRANSLATORS: help output 7 */
printf(_("Please report bugs to <%s>\n"), PACKAGE_BUGREPORT);
