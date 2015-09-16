/* 
 * File:   getop.c
 * Author: wpower
 *
 * Created on September 14, 2015, 9:11 AM
 */

#include <stdio.h>
#include <ctype.h>

int getop( char s[] ){
    //Reads the next operand into the char array from stdin
    scanf("%s", s);
    int cp = 0;
    int res = '0';
    while( s[cp] != '\0' ){
        if( ispunct(s[cp])  ){
            res = s[cp];
            break;
        } else if ( s[cp] == '\n' ){
            res = '\n';
            break;
        }
        cp++;
    }
   
    return res;
};

