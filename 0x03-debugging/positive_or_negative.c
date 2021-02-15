#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - main block
 * @n: integer value
 * Return: returns positive or negative values
 */
int positive_or_negative(int n)
{

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);

return (0);
}
