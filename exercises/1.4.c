
#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  celsius = lower;
  printf("Celsius-Fahrenheit Table\n");
  printf("------------------------\n");
  while (celsius <= upper) {
    fahr = ((9.0 / 5.0) * celsius) + 32.0;
    printf("%3.0f %5.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
