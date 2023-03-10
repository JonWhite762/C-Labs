#include <stdio.h>

int sum(int num[], int size){
    int i;
    int add = 0;
    for(i=0;i<size;i++){
        add +=num[i];
         
    }
 return add;   
}
int findLargest(int num[], int size){
    int i;
    int max;
    max = num[0];
    for(i=1;i<size;i++){
        if(num[i]>max){
            max = num[i];
            
        }
    
    }
return max;
    
}
int findSmallest(int num[], int size){
    int i;
    int min;
    min = num[0];
    for(i=1;i<size;i++){
        if(num[i]<min){
            min = num[i];
            
        }
    
    }
return min;
}

int main(){
    int num[5];
    int i;
    printf("Input five integers: ");
    for(i=0;i<5;i++){
    scanf("%d",&num[i]);
    }
    printf("\n%d Is the Sum",sum(num,5));
    printf("\n%d Is the Largest",findLargest(num,5));
    printf("\n%d Is the Smallest",findSmallest(num,5));
    return 0;
}