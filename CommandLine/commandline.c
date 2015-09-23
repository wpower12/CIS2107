/* 
 * File:   commandline.c
 * Author: wpower
 *
 * Created on September 23, 2015, 10:40 AM
 */

#include <stdio.h>
#include <stdlib.h>

/* <Command Line>
 * 
 * You can interact with the user on the command line if you pass specific
 * parameters to your main function.
 * 
 * main( int argc, char *argv[] )
 * 
 * These pass the number of arguments (argc) and an array of pointers to the
 * character representation of the inputs (argv).
 * 
 * Lets implement a simple command that copys the echo command.
 * 
 * echo first second -> first second
 * 
 * Just repeats all arguments.
 *
 * We do all the work in main cause simple. 
 * 
 * Compile with -o to make your own object.  Dont call it echo or the OS will
 * preferrentially run the original echo from bin.
 * 
 */
int main(int argc, char** argv) {
    int i;
    for(i = 0; i < argc; i++){
        printf( "%s%s", argv[i], (i < argc-1) ? " " : "" );
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

