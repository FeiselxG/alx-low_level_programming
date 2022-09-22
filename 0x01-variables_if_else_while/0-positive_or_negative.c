nclude <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("%1 is negative\n",n);
	else if(n<0)
		printf("%1 is positive\n",n);
	else
		print("%1 is zero\n",n);
	return (0);
}
