/* 
 * File:   structures.c
 * Author: wpower
 *
 * Created on September 30, 2015, 10:01 AM
 */

#include <stdio.h>
#include <stdlib.h>

/* <Structures>
 * 
 * Structures define a collection of variables, in a way similar to a class.
 * We just don't define methods inside a structure.  They are a convience 
 * method for handling groups of data.  
 * 
 */

//Define a struct
struct point {
    int x;
    int y;
};

int structEx() {
    //Declaring variables as a type of the struct.
    struct point p1;
    struct point p2 = {100, 300};

    //Accessing the structs with dot notation
    p1.x = p2.x * 2;
    p1.y = p2.y * 2;

    //We can make memebers of structs other structs
    struct rectangle {
        struct point pt1;
        struct point pt2;
    };

    //Same deal with accessing and setting.
    struct rectangle screen;
    screen.pt1.x = p1.x;
    screen.pt1.y = p1.y;
    screen.pt2 = p2;

    return screen.pt2.x-screen.pt1.x;
}

//We can return structs.  Just use it as a datatype in the signature
struct point makepoint(int, int);
struct point middle( struct point, struct point );

struct point makepoint( int x, int y ){
    struct point temp = { x, y };
    return temp;
}

struct point middle( struct point p1, struct point p2 ){
    struct point temp;
    temp = makepoint((p2.x+p1.x)/2, (p2.y+p1.y)/2);
    return temp;
}

int main(int argc, char** argv) {
    
    struct point p1 = { 100, 100 };
    struct point p2 = { 300, 300 };
    
    struct point mid;
    
    mid = middle( p1, p2 );
    
    printf( " P1: %d, %d\n", p1.x, p1.y );
    printf( " P2: %d, %d\n", p2.x, p2.y );
    
    printf( "Mid: %d, %d\n", mid.x, mid.y );
    
    //We can also make pointers to structs
    //We make a reference to a struct with the *
    struct point origin, *pp;
    origin = makepoint( 250, 6000 );
    pp = &origin;   //We address pp by gettings origins location with & operator
    
    //The dot operator has higher precedence than the dereference operator, so
    //we need to use parens.
    printf("origin: (%d, %d)\n", (*pp).x, (*pp).y);
    
    //Theres a fun way to see the size of a structure.  THis is used when we 
    //need to manually allocate memory for our data.
    printf("Size of origin: %ld bytes\n", sizeof(struct point));
    
    /**
     * We can also create nameless structs, that just apply to one variable
     * 
     * Heres an example that is also a pointer to the struct type 
     */
    
    struct {
        int len;
        char *str;
    } *p;
    
    ++p->len;  //This increments the len value that p points to.
    //This is equivelent to ++(p->len), when the struct doesnt have a name
    //the precedence is different?
    
    //We can have arrays of structs.
    struct key {
        char *word;
        int count;
    };  //We could have defined keytab here also.
    int NUMKEYS = 1000;
    struct key keytab[NUMKEYS];
               
    //Initializing struct arrays uses sequential syntax
    keytab[] = {
        "break", 0,
        "const", 0,
        "return", 0
        //Etc
    };
    
    return (EXIT_SUCCESS);
}

