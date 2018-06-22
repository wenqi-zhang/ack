/* $Id$ */

#include <stdlib.h>
#include <ack/config.h>
#include "ext_fmt.h"

#if ACKCONF_WANT_STDIO_FLOAT

void _str_ext_cvt(const char* s, char** ss, struct EXTEND* e);
double _ext_dbl_cvt(struct EXTEND* e);

double
strtod(const char* p, char** pp)
{
	struct EXTEND e;

	_str_ext_cvt(p, pp, &e);
	return _ext_dbl_cvt(&e);
}

#endif
