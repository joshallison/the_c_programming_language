/*
	Program print's farenheight to celceius table
*/
#include <stdio.h>

#define     UPPER     300
#define     LOWER       0
#define     STEP       20

// Calculate's farenheight relative to celceius argument
int celToFaren(int cel) {
  return (cel * 9/5) + 32;
}


int main() {
  int c, f, in;
  c = LOWER;
  f = 0;

  in = getchar();

  putchar(in);

  printf("%3s%6s\n", "F", "C");
  printf("---------------\n");

  while(c <= UPPER) {
    f = celToFaren(c);
    printf("%3d%6d\n", f, c);
    c = c + STEP;
  }

  return 1;
}

