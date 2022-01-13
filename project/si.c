/* Project 1, 13/1/2022, Author :- Legend108 */
/* Simple interest */

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
	printf("%f\n", si);

	/* Stop execution */
	return 0;
}
