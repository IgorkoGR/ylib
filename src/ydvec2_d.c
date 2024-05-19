// TODO: 42 header

#include "ytypes.h"
#include "yvec2.h"
t_dvec2	dvec2_mul(t_dvec2 a, t_dvec2 b)
{
	return (t_dvec2){.x = a.x * b.x, .y = a.y * b.y};
}

// Element-wise division of 2 2D double vectors
t_dvec2	dvec2_div(t_dvec2 a, t_dvec2 b)
{
	return (t_dvec2){.x = a.x / b.x, .y = a.y / b.y};
}
