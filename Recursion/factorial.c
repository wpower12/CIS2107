/* 
 * File:   factorial.c
 * Author: wpower
 *
 * Created on September 16, 2015, 9:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

int fact_rec(int);
int fact_imp(int);
int fact_tailrec( int, int );

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    for (i = 1; i < 20; i++) {
        //printf("fact(%d) = %d\n", i, fact_imp(i));
        //printf("fact(%d) = %d\n", i, fact_rec(i));
        printf("fact(%d) = %d\n", i, fact_tailrec(1, i));
    }
    return (EXIT_SUCCESS);
}

int fact_rec(int n) {
    if( n==1 ) return 1;
    else return n*fact_rec(n-1);
}

int fact_tailrec( int carry, int n  ){
    if( n==1 ) return carry;
    else return fact_tailrec( n*carry, n-1 );
}

int fact_imp(int n) {
    int i;
    int res = 1;
    for (i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}


