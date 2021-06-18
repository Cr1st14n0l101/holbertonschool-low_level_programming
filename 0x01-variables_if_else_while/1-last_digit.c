#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 5)
	  {
	    printf("is %n and is greater than 5/n");
	  }
	else(n = 0)
	      {
		print("is %n and is 0/n");
	      }
	else(n > 6)
	      {
		printd("is %n and is less than 6 and not 0/n")
	      }
	return (0);
}
