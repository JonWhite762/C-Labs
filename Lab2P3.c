#include <stdio.h>

int isPrime(int i){
int gen = 0;
for(int t=2; t<= i/2; t++){
    if(i%t==0){
        gen=1;
        break;

    }
}
if(gen==1){
    return 0;
}else {
    return 1;

}
}



void generatePrimes(int n){
    int amount = 1, gen, i=2, t;
    while (amount <= n){
        if(isPrime(i)){
            printf("%d\t",i);
            amount++;

        }
        i++;
    }

}
int main(){
    int n;
    printf("Enter amount of prime numbers: ");
    scanf("%d", &n);
    generatePrimes(n);
}


