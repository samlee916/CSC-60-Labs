#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lab5.h"


void find_two_radii(double a, double b, double c, double *radius_inside, double *radius_outside)
{

	double s = .5*(a+b+c);
	*radius_inside = sqrt((s-a)*(s-b)*(s-c))/s;
	*radius_outside = (a*b*c)/(4*sqrt((s*(s-a)*(s-b)*(s-c))));

	return;
}

