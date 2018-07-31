#include <stdio.h>

/* Write a program that prints its input one word per line */

#define IN 1                    /* inside a word */
#define OUT 0                   /* outside a word */

int main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      putchar('\n');
    }
    else if (state == OUT)
      state = IN;
  }
}
