#include <stdio.h>
int main(){
    int n, sum;
    printf("Enter a integer: ");
    scanf("%d", &n);
    if(n < 0){
        printf("invalid input");
    return 0;
    }

    sum = 1 - 2 + 3 - 4 + n;
    printf("\n%d", sum);

    return 0;

}