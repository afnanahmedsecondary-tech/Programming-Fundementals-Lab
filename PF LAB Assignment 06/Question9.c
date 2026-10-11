#include <stdio.h>

int main() {

    char word[50]; printf("Enter a word \n"); fgets(word, sizeof(word), stdin);
    printf("Orginal Word: ");
    for (int i = 0; word[i] != '\0'; i++) printf("%c", word[i]);
    printf("\n");



    int len=0;
    while(word[len] != '\n') len++;
    printf("Lenght %d \n", len);


    printf("Reverse Word: ");
    for ( int count = len - 1; count > -1; count--) printf("%c", word[count]);
    printf("\n");


    int start = 0;
    int end = len -1;

    while (word[start] == word[end] && start < end) {
        start++;
        end--;
    }

    if (start >= end) printf("It is a palindrome \n");
    else printf("Not a palindrome \n");



    int consonant = 0; int vowel = 0;
    for (int i = 0; word[i] != '\0'; i++) {

        if (word[i] == '\0' || word[i] == '\n') continue;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
        word[i] == 'o' || word[i] == 'u') vowel++;

        else consonant++;
    }

    printf("No of Vowels: %d \n", vowel);
    printf("No of Consonants: %d \n", consonant);





}