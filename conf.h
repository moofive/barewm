#ifndef CONF_H
#define CONF_H

#define VERSION 	"0.3" // Bare WM version.
#define DISPLAY		":0" // Which display to use.
#define CURSOR		XC_left_ptr // Default cursor, overrides any custom cursors you may have defined outside the WM, i.e. in xinitrc.
#define CMD_CURSOR	XC_rtl_logo // Cursor to let you know you are in command mode. This is best to differ from CURSOS.
#define MOD_MASK 	Mod1Mask // Modifier key.
#define KEY_PREFIX	't' // Key to enter command mode.
#define KEY_WINLIST	'w' // Key to show window list.
#define KEY_TERMINAL 'c' // Key to spawn terminal.
#define KEY_KILL	'q' // Key to kill selected window.
#define KEY_MENU 	'm' // Key to spawn menu.
#define KEY_PREV	'p' // Select previous window in list.
#define KEY_NEXT	'n' // Select next window in list.
#define KEY_STATUS	's' // Show message containing output from the command defined at STATUS.
#define TERMINAL	"urxvt" // Terminal.
#define MENU		"`dmenu_path | dmenu -fn '-xos4-terminus-*-r-*-*-12-*-*-*-*-*-*-*' -nb '#222222' -nf '#FFFFFF' -sf '#ffffff' -sb '#666666'`" // Launcher menu to run.
#define FONT		"-xos4-terminus-*-*-*-*-12-*-*-*-*-*-*-*" // Font to use.
#define BORDER		2 // Border size for window lists / input box.
#define FGCOLOR		"#cfdb6c" // Window list and messaging foreground color.
#define BGCOLOR		"#222222" // Window list and messaging background color.
#define SELFGCOLOR	"#222222" // Window list foreground for selected window.
#define SELBGCOLOR	"#edf69f" // Window list background for selected window.
#define PADDING_NORTH	0 // Top screen edge unmanaged pixels.
#define PADDING_WEST	0 // Left screen edge unmanaged pixels.
#define PADDING_SOUTH	0 // Bottom screen edge unmanaged pixels.
#define PADDING_EAST	0 // Right screen edge unmanaged pixels.
#define WLISTPADDING	5 // Left and right space in window list.
#define WLISTPOS	1 // 0 = NW, 1 = NE, 2 = SE, 3 = SW, 4 = C
#define TIMEOUT		2 // Timeout.
#define STATUS		"short-info.sh" // Command whose output is shown when you hit KEY_STATUS.

#endif
