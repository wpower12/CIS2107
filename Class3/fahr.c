#include <stdio.h>

#define LOWER 	-50
#define UPPER 	50
#define STEP 		5

main()
{
	int fahr;
	
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf( "%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32) );
}
