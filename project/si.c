/* Project 1, 13/1/2022, Legend108 */
/* Simple interest */

/* To be able to use printf() */
#include <stdio.h>

int main() {
	/* Declaring the variables */
	int prin, noy;
	float rate, si;
	/* Setting the principal, number of years, rate of interest */
	prin = 1000;
	noy = 3;
	rate = 3.5;

	/* Getting the result out */

	si = prin * noy * rate / 100;
	printf("The simple interest is: %f\n", si);

	/* Return true */
	return 0;
}
