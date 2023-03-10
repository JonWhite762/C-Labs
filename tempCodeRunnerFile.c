#include <stdio.h>
void shift(int *, int *, int *);
int main(){
int a, b, c;
printf("\nEnter a integer for a: ");
scanf("%d",&a);
printf("\nEnter a integer for b: ");
scanf("%d",&b);
printf("\nEnter a integer for c: ");
scanf("%d",&c);
shift(&a,&b,&c);

printf("Shift : %d %d %d\n", a, b, c);
return 0;
}

void shift(int *a, int *b, int *c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}