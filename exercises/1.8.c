#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */

int main()
{
  int c, nb, nt, nl;

  nb = nt = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ')
      ++nb;
  }
  printf("Blanks: %d\n", nb);
  printf("Tabs: %d\n", nt);
  printf("Newlines: %d\n", nl);
}

