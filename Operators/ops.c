#include <stdio.h>

void squeeze( char[], int );

void main(){
	char name[] = "bananananananana";
	char target = 'a';
	
	printf("Removing %c from %s \n", target, name );
	squeeze( name, target );
	printf("%s \n", name);	
}

void squeeze( char s[], int c ){
	int i, j;
	printf( "  i\t|   j\t| word \t\t| s[i] == c \n" );
	for( i=j=0; s[i] != '\0'; i++ ){
		if( s[i] != c ) s[j++] = s[i];
		printf( "%d\t| %d\t| %s| %c == %c | %c \n", i,j,s,s[i],c, (s[i] != c ) ? ' ' : 'X'  );	
	}
	s[j] = '\0';
}
