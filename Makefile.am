
SUBDIRS = src po
ACLOCAL_AMFLAGS = -I m4

# Icons
hicolor_icondir = @datadir@/icons/hicolor/scalable/apps
hicolor_icon_DATA = data/icons/hicolor/scalable/apps/redshift.svg \
	data/icons/hicolor/scalable/apps/redshift-status-on.svg \
	data/icons/hicolor/scalable/apps/redshift-status-off.svg

if ENABLE_UBUNTU
ubuntu_mono_dark_icondir = @datadir@/icons/ubuntu-mono-dark/scalable/apps
ubuntu_mono_dark_icon_DATA = \
	data/icons/ubuntu-mono-dark/scalable/apps/redshift-status-on.svg \
	data/icons/ubuntu-mono-dark/scalable/apps/redshift-status-off.svg

ubuntu_mono_light_icondir = @datadir@/icons/ubuntu-mono-light/scalable/apps
ubuntu_mono_light_icon_DATA = \
	data/icons/ubuntu-mono-light/scalable/apps/redshift-status-on.svg \
	data/icons/ubuntu-mono-light/scalable/apps/redshift-status-off.svg
endif


# Desktop file
if ENABLE_GUI
desktopdir = @datadir@/applications
desktop_DATA = data/applications/gtk-redshift.desktop
endif

# man page
dist_man1_MANS = redshift.1

EXTRA_DIST = \
	$(hicolor_icon_DATA) \
	$(desktop_DATA)

if ENABLE_UBUNTU
EXTRA_DIST += \
	$(ubuntu_mono_dark_icon_DATA) \
	$(ubuntu_mono_light_icon_DATA)
endif

# Update PO translations
.PHONY: update-po
update-po:
	cd po && $(MAKE) POTFILES redshift.pot update-po
