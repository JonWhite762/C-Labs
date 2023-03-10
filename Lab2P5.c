#include <stdio.h>
int main(){
int a, b, c;


printf("Enter a integer for a: ");
scanf("%d",&a);
printf("\nEnter a integer for b: ");
scanf("%d",&b);
printf("\nEnter a integer for c: ");
scanf("%d",&c);
shift(&a,&b,&c);

printf("Shift : %i %i %i\n", a, b, c);
return 0;
}

void shift(int *a, int *b, int *c){
    int test = *a;
    *a = *c;
    *c = *b;
    *b = test;
}