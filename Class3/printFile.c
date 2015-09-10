#include <stdio.h>

main(){
	int nc;
	nc = 0;	

	for( nc=0; getchar() != EOF; ++nc )
		;
	printf( "%d \n", nc );
}
