#include <stdio.h>
#include <stdlib.h>

/* Exercise 1-3. */
/* TODO: Modify the temperature conversion program  to print a heading above the table. */
/* oC=(5/9)(oF-32) */
int main()
{
  int lower, upper, step;
  float fahr, celc;
  char *msg = (char*)malloc(100);

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while(fahr <= upper) {
    celc = (5.0f/9.0f)*(fahr-32.0);
    sprintf(msg, "%.0f \t %.1f\n", fahr, celc);
    printf("%s", msg);
    fahr+=step;
  }
  free(msg);

  printf("Exercise 1-3. \n"
	 "TODO: Modify the temperature conversion program  to print a heading above the table. \n"
	 "oC=(5/9)(oF-32) \n");
  
  return 0;
}
