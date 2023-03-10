#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter integer one: ");
    scanf("%d", &a);
    printf("Enter integer two ");
    scanf("%d", &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("\n%d", sum);
    printf("\n%d", difference);
    printf("\n%d", product);
    printf("\n%d", quotient);
    printf("\n%d", remainder);
   
    return 0;

}