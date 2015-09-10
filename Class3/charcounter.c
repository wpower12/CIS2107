/* Counting characters
	-Store 10 digits, spaces, all else
	-So 12 Categories
	-int array with 12 bins.		
*/

#include <stdio.h>


main(){
	int ndigits[10];
	int c, i, nwhite, nother;
	for(i=0; i<10; ++i )
		ndigit[i] = 0;	
	while( c = getchar() != EOF )
		if( c >= '0' && <= '9' )
			++ndigit[c-'0'];
		else  if ( c == ' ' || c=='\n' || c== '\t')
			++nwhite;
		else 
			++nother;
	printf( " 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | w | o " );

}	
