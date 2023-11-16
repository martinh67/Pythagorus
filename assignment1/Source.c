/* in order to use printf */
#include <stdio.h>
/* in order to use the sqrt*/
#include <math.h>

/* function prototype for calculating the hypotenuse */
double calculate_hypotenuse(double a, double b);

int main()
{
	/* informtion regarding the program */
	printf("Hypotenuse calculations using the formula c = sqrt((a * a) + (b * b)):\n\n");
	/* results using the values given within the question calling the calculate_hypotenuse function */
	printf("Triangle 1 with sides 3.0 and 4.0 has a hypotenuse of %.1f\n", calculate_hypotenuse(3.0, 4.0));
	printf("Triangle 2 with sides of 5.0 and 12.0 has a hypotenuse of %.1f\n", calculate_hypotenuse(5.0, 12.0));
	printf("Triangle 3 with sides 8.0 and 15 has a hypotenuse of %.1f\n", calculate_hypotenuse(8.0, 15));

	return 0;
}

/* function to calculate the hypotenuse */
double calculate_hypotenuse(double a, double b)
{
	double c = sqrt((a * a) + (b * b));
	return c;
}