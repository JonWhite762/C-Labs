#include <stdio.h>
int main(){
    
    int a;
    printf("Enter a integer: ");
    scanf("%d", &a);
    if(a < 0){
        printf("invalid input try again");
        return 0;
    }




    return 0;
}