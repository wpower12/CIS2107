/* 
 * File:   main.c
 * Author: wpower
 *
 * Created on September 14, 2015, 9:11 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100
#define NUMBER '0'
/*
 * 
 */
int main(int argc, char** argv) {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0) {
                    push(pop() / op2);
                } else {
                    printf("division by zero");
                }
                break;
            case '\n':
                printf("result: %g", pop());
                break;
            default:
                printf("result: %g", pop());
                break;
        }
    }
}

