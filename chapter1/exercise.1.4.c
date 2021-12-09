#include <stdio.h>

/* convert celcius to fahrenheit */
/* oC=(5/9)(oF-32) */
/* (0°C × 9/5) + 32 = 32°F */

int main() {
  int lower, upper, step;
  float celc, fahr;

  lower = 0;
  upper = 300;
  step = 20;
  
  celc = lower;

  while(celc <= upper) {
       fahr = (celc * (9.0/5.0)) + 32;
       printf("%.2f \t %.2f\n", celc, fahr);
       celc += step;
  }
}
