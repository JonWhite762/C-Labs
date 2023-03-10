#include <stdio.h>
int main(){
    int a;
    char c;
    float g;
    printf("Enter a integer: ");
    scanf("%d",&a);
    printf("\nEnter a Character: ");
    scanf("\n%c",&c);
    printf("\nEnter a real number: ");
    scanf("\n%f",&g);
    printf("\n%c is a character", c);
    printf("\n%d is a integer", a);
    printf("\n%f is a real number", g);
    return 0;
}