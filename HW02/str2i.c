#include <stdio.h>

int stoi( char str[] );
int power( int a, int b );

void main(){
	char in[100];
	while( 1 == 1 ){
		printf("Enter number string: ");
		scanf( "%s", in );	
		printf( "String: %s Value: %d\n", in, stoi(in) );
	}
}

int stoi( char str[] ){
	//count digits
	int c = 0;
	while( str[c] != '\0' && ( str[c] >= '0' ) && ( str[c] <= '9' ) ){
		c++;
	}
	int sum = 0;
	int p;
	//Add to power*digit to the sum
	//Trick is going 'backwards' with the power values
	for( p = 0; p < c; p++ ){
		sum += power( 10, c-p-1 )*(str[p]-'0');
	}
	return sum;
}

int power( int a, int b ){
	int sum;	
	if( b == 0 ) sum = 1;
	else sum = a;
	while( --b > 0 ){
		sum *= a; 
	}
	return sum;
}
