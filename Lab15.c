#include <stdio.h>

int main(){

    int grade;

    printf("Enter Grade mark: ");
    scanf("%d", &grade);

    if(grade <=49){
        printf("\nF");
    }
        else if(grade <= 54){
            printf("\nD");
        }
            else if(grade <= 64){
                printf("\nC");
            }
                else if(grade <= 84){
                    printf("\nB");
                }
                    else {
                        printf("\nA");
                    }
    
        
    
return 0;
}