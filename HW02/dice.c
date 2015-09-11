#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NOTSAME 0
#define SAME 1

void rolldice( int[], int );
int check( int[], int, int );
void printdice(int[], int);

void main(){
	srand(time(NULL));
	int d;	
	int same;
	
	printf( "Number of Dice? :" );
	scanf("%d", &d);
	printf( "Stop when # are the same, #? :" );
	scanf("%d", &same);

	int dice[d];
	int count = 1;
	rolldice( dice, d );
	while( check( dice, d, same ) == NOTSAME ){
		rolldice( dice, d );
		count++;	
	}
	printf("It took %d rolls\n", count );
	printdice( dice, d );
}

void rolldice( int dice[], int num ){	
	int i;	
	for( i=0; i < num; i++ ){
		dice[i] = rand() % 6;
	}
}

int check( int dice[], int numd, int s ){
	int d, checkd, count;	
	for( d = 0; d < numd; d++ ){
		count = 0;		
		for( checkd = 0; checkd < numd; checkd++ ){
			if( !(d == checkd) && dice[d]==dice[checkd] ) count++;
		}
		if ( count == s ) return SAME;
	}
	return NOTSAME;
}

void printdice( int dice[], int d ){
	int i;
	printf("(");
	for(i = 0; i < d; i++){
		printf(" %d", dice[i]);
	}
	printf(" )\n");		
}










