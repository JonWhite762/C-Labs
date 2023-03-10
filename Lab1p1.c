#include <stdio.h>
int isEven(int n);
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    isEven(n);
    return 0;
}
int isEven(int n){
    if(n%2==0){
        printf("%d is even", n);
        return 1;
    } else{
        printf("%d is odd", n);
        return 0;

    }
}