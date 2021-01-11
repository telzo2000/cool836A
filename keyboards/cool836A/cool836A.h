#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K10, K20, K30, K40, K50, \
	K03, K13, K23, K33, K43, K53, \
	K01, K11, K21, K31, K41, K51, \
	K04, K14, K24, K34, K44, K54, \
	K02, K12, K22, K32, K42, K52, \
	K05, K15, K25, K35, K45, K55  \
) { \
	{ K00, K10, K20, K30, K40, K50 }, \
	{ K03, K13, K23, K33, K43, K53 }, \
	{ K01, K11, K21, K31, K41, K51 }, \
	{ K04, K14, K24, K34, K44, K54 }, \
	{ K02, K12, K22, K32, K42, K52 }, \
	{ K05, K15, K25, K35, K45, K55 }  \
}

#endif