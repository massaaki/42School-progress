#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x = malloc(3 * sizeof(int));
	x[0] = 1;
	x[1] = 1;
	x[2] = 1;

	// free(x);

	return (0);
}