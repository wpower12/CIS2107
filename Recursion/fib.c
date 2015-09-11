#include <stdio.h>

int fib(int x);
int fib_r( int a1, int a2, int x );

void main(){
	int i = 0;	
	for( i=0; i < 10; i++ ){
			printf("fib(%d) = %d\n", i, fib(i));
	}
}

int fib( int x ){
	if( x == 0 ) return 0;
	if( x == 1 ) return 1;	
	else return fib_r( 0, 1, x-1 );
}

int fib_r( int a1, int a2, int x ){
	if( x == 1 ) return a1+a2;
	else return fib_r( a2, a1+a2, x-1 );
}
