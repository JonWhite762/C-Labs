#include <stdio.h>
int main(int argc, char **argv) {
int a = 3;
int *iptr;
iptr = &a;
char y = 'x';
char *cptr;
cptr = &y;
printf("%i %c\n", a, y);
*iptr = 2;
*cptr = 't';
printf("%i %c\n", a, y);
}