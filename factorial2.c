/*#include<stdio.h>

void factorial(int x);

int main() {
    int x;

    printf("Random Number is:\n");
    x = rand();
    printf("%d\n", x);
    factorial(x);

    return 0;
}

void factorial(int x) {
    int fact = 1;

    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }

    printf("The factorial of given number %d is %d\n", x, fact);
}*/
#include<stdio.h>
#include<stdlib.h>  // Include this header for rand() function

void factorial(int x);

int main() {
    int x;

    printf("Random Number is:\n");
    x = rand() % 20 + 6;  // Adjust the range as needed
    printf("%d\n", x);
    factorial(x);

    return 0;
}

void factorial(int x) {
    int fact = 1;

    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }

    printf("The factorial of given number %d is %d\n", x, fact);
}



