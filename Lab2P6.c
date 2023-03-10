#include <stdio.h>

int main(){
int vowels = 0;
char word[80];
printf("Enter a word: ");
gets(word);
vowels=countVowels(word);
printf("%d vowels in this string", vowels);

}

int countVowels(char word[]){
    int i;
    int vowels = 0;
    for(i=0;word[i]!='\0';i++){
      if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U') {
        vowels++;
      }
   
    }
return vowels;
}