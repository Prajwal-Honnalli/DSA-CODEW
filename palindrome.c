/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, sum = 0, temp;

       srand(time(0));

    n = rand() %1000 + 1;
    temp = n;

    printf("Number = %d\n", n);


    while (n != 0) {
        int remainder = n % 10;
        sum = sum * 10 + remainder;
        n /= 10;
    }


    if (temp == sum)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, sum = 0, temp;

    srand(time(0));

    n = rand() % 1000 + 1;
    temp = n;

    printf("Number = %d\n", n);

    while (n != 0) {
        int remainder = n % 10;
        sum = sum * 10 + remainder;
        n /= 10;
    }

    if (temp == sum)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

