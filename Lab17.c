#include <stdio.h>
#include <stdlib.h>


    int main() {


        int n;
        int total = 0;
        int i = 1;
        printf("Enter a postive integer: ");
        scanf("%d", &n);
        if (n < 0) {

            printf("Error, enter a positive integer!!");

        }

        while (i <= n) {
            if (n % i != 0) {
                i++;
            }

            else {
                total = total + i;
                i++;
            }

        }

        if (total == n * 2) {

            printf("This is a perfect number!");

        }
        else {

            printf("This is NOT a perfect number.");

        }

        return 0;




}