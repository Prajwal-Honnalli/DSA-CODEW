//Program to calculate volume of sphere
/*#include<stdio.h>

int main(){
    float area;
    float r;
    int i;

    printf("Random Numbers is:\n");
    for (i = 0; i < 1; i++)
    {
        r = rand() % 100 + 10;
        printf("%f\n", r);
    }
        area = 4*3.142*r*r*r;
    printf("volume of given sphere is =%f",area);
    return 0;

}*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float volume;
    float r;
    int i;

    printf("Random Numbers are:\n");
    for (i = 0; i < 5; i++) {  // Adjust the loop condition for multiple random numbers
        r = rand() % 100 + 10;
        printf("%f\n", r);

        volume = (4.0 / 3.0) * 3.142 * r * r * r;
        printf("Volume of the sphere with radius %f is %f\n", r, volume);
    }

    return 0;
}
