#include <stdio.h>
int main()
{
	double pai, x = 0, i = 1, j = 1;
	while (1 / i > 1e-6)
	{
		x = j / i + x;

		i = i + 2;
		j = -j;

	}
	pai = 4 * x;
	printf("%lf\n", pai);
	return 0;
}

