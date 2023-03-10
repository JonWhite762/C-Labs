#include <stdio.h>
int isPrime(int n);
int main(){
int n, i, c = 0;
printf("Enter a number: ");
scanf("%d", &n);
if(n<0){
    printf("inavlid input try again!");
    
}

isPrime(n);
}
int isPrime(int n){
   int i, c;
   for(i=2;i<=n;i++){
        if(n%i==0){
        break;
        }
   }
    if(n==i){
        printf("%d is prime", n);

    } else{
        printf("%d Isnt prime", n);
      }   

   
}
