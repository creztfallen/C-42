#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = upper;
    while (celsius >= lower)
    {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius -= step;
    }
}