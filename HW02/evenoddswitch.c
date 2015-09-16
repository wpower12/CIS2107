#include <stdio.h>
#define EVEN 1

int parity(int);

void main() {
    int val;
    while (1 == 1) {
        printf("Value?: ");
        scanf("%d", &val);
        printf("%s", parity(val) == EVEN ? "Even\n" : "Odd\n");
    }
}

int parity(int v) {
    //Returns 1 if v is even, 0 if its odd
    switch (v % 2) {
        case 0:
            return 1;
        case 1:
            return 0;
    }
}
