#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXLINE 1000
#define MAXOP 100
#define NUMBER '0'

int getop(char[]);
void push(double);
double pop(void);

void main( void ){
	int type;
	double op2;
	char s[MAXOP];	

	while( (type = getop(s)) != EOF){
		switch(type){
			case NUMBER:
				push( atof(s) );
				break;
			default:
				break;
		}
	}
}
