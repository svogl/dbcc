#ifndef _2JS_H
#define _2JS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "can.h"
#include <stdbool.h>

typedef struct {
	bool use_time_stamps;
	bool generate_print, generate_pack, generate_unpack;
	bool generate_asserts;
} dbc2js_options_t;

int dbc2js(dbc_t *dbc, FILE *c, FILE *h, const char *name, dbc2js_options_t *copts);

#ifdef __cplusplus
}
#endif

#endif
