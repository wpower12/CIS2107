#include <stdio.h>

void main(){
	char string[100];
	int sum = 0;
	
	//Prompt for string
	printf("Enter string: ");
	scanf( "%s", string );

	//While not empty
	while( string[0] != '\0' ){
		int i = 0;
		while( string[i] != '\0'){
			sum += string[i]-'0';
			i++;
		}
		//Display sum
		printf("Sum: %d", sum);
		sum = 0;		
		//Prompt for String
		printf("\nEnter string: ");
		scanf( "%s", string );
	}
}
