/* Sam Lee                                      */
/* Lab 4                                           */
/* Figure the area of the top of a cylinder        */
/* and the volume of a cylinder                    */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FILE_IN  "lab4.dat"
//#define FILE_IN  "lab4sample.dat"
#define FILE_OUT "lab4.out"

int main(void)
{

	double radius, height, area, volume;
	int count;
	FILE * In;
	FILE * Out;

	In = fopen(FILE_IN, "r");
	if (In == NULL) {
	printf("Error on opening the input file \n");
	}

	Out = fopen(FILE_OUT, "w");
	if (Out == NULL) {
	printf("Error on opening the output file \n");
	}

	fprintf(Out, "Sam Lee. Lab4. \n");

	while((fscanf(In, "%lf%lf", &radius, &height)) == 2) {
	area = M_PI * radius * radius;
	volume = M_PI * radius * radius * height;
	count++;
	fprintf(Out, "\nCylinder %1d", count);
	fprintf(Out, "\nThe radius is:    %9.3f", radius);
	fprintf(Out, "\nThe height is:    %9.3f", height);
	fprintf(Out, "\nThe top area is:  %9.3f", area);
	fprintf(Out, "\nThe volume is:    %9.3f\n", volume);

}
	fclose(In);
	fclose(Out);
	return EXIT_SUCCESS;
}

