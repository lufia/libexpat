#include_next <math.h>

static float _inf(void)
{
	unsigned long v;

	v = 0x7f800000;
	return *(float *)&v;
}

static float _nan(void)
{
	unsigned long v;

	v = 0x7fc00000;
	return *(float *)&v;
}

#define	INFINITY	_inf()
#define	NAN	_nan()
