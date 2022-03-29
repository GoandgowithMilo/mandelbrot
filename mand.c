#include <stdio.h>
#include <complex.h>
#include <math.h>

int mand(double real, double imag);

int main(int argc, char *argv[])
{
	// The code works by starting at a given real and imaginary number pair which form a complex number.
	// This is then fed into the mand function, which performs a test to check whether this complex number diverges or not.
	// If divergent we print a space, if convergent we print @.
	// The x_inc variable is then added to the real variable and the process repeats until real is greater than or equal to x_max.
	// The y_inc variable is then added to the imag variable, the real variable is reset and the process continues until the imag variable is less than or equal to y_min.


	// draws from the top of the graph down, left to right
	double y_min = -1.5;
	double x_max = 1.0;

	// specifies domain
	double imag = 1.5;
	double real = -2.0;

	// specifies the incremental change (0.05 for both x and y is a safe base for testing)
	double x_inc = 0.015;
	double y_inc = 0.03;

	while(imag >= y_min)
	{
		while(real <= x_max)
		{
			if(mand(real, imag) == 0)
			{
				printf("@");
			}
			else
			{
				printf(" ");
			}

			real += x_inc;
		}
		printf("\n");

		imag -= y_inc;
		real = y_min;
	}
	
	return 0;
}

int mand(double real, double imag)
{
	double complex z1 = 0.0 + 0.0 * I;
	double complex c = real + imag * I;
	int max_itr = 1000;
	int escape_lmt = 2;
	int flag = 0;

	for(int i = 0; i < max_itr; i++)
	{
		z1 = z1 * z1 + c;

		// this is testing whether it diverges
		if(sqrt(creal(z1) * creal(z1) + cimag(z1) * cimag(z1)) >= escape_lmt)
		{
			flag = 1;
			break;
		}
	}

	return flag;

}
