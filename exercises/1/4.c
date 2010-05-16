/* Exercise 1-4.
 * 
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300; floating-point version */

int
main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (5.0 / 9.0) * (celsius + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
