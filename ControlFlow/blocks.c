#include <stdio.h>

void main( ){

	//Semicolons define lines of code.
	//Blocks of code are implied on keyword basis
	//Or {} can be used to contain a block
	int s[5];
 
	int n = -1;
	int i;
	if(n > 0)
	{
		for( i = 0; i < n; i++ ){
			if( s[i] > 0 ){
				printf("stuff");
			}
		}
	} else {
			printf("Negative n");
	}
}		
