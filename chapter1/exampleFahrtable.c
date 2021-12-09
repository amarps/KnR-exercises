/**
 * fahrenheit to celcius formula
 * oC=(5/9)(oF-32)
*/

/* print table of fahrenheit and celcius
 * given data of fahrenheit table = lower, lower+step, ... upper */

#include <stdio.h>

int main()
{
  int lower, step, upper;
  int celcius, fahr;

  lower = 0;
  step = 10;
  upper = 300;
  int a = 42767;

  printf("%d\n", a);
  
  fahr = celcius = 0;
  
  for (fahr = lower; fahr <= upper; fahr+=step) {
    celcius = 5*(fahr-32) / 9;
    printf("%d fahrenheit == %d celcius\n", fahr, celcius);
  }

  return 0;
}

