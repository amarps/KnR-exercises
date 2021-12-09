/* Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function */
/* for conversion.  */

/*  oC=(5/9)(oF-32)   */

#include <stdio.h>

float fahrtocelc(float fahr) {
    float celcius = 5 * (fahr-32) / 9;
    return celcius;
}

int main(int argc, char *argv[])
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
	celcius = fahrtocelc(fahr);
	printf("%d\t%d\n", fahr, celcius);
	fahr += step;
    }
    return 0;
}

