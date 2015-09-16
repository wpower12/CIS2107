#include <stdio.h>

void printArmstrongs(int);
int isArmstrong(int);
int power(int, int);

void main() {
    int n;
    while (1) {
        printf("Upperbound?: ");
        scanf("%d", &n);
        printArmstrongs(n);
    }
}

void printArmstrongs(int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
}

int isArmstrong(int n) {
    //get number of digits
    int digits = 0;
    int d = n;
    while (d != 0) {
        d /= 10;
        digits++;
    }
    //do check
    d = n;
    int sum = 0;
    int r;
    while (d != 0) {
        r = d % 10;
        sum += power(r, digits);
        d /= 10;
    }
    return (sum == n) ? 1 : 0;
}

int power(int a, int b) {
    int sum;
    if (b == 0) sum = 1;
    else sum = a;
    while (--b > 0) {
        sum *= a;
    }
    return sum;
}













