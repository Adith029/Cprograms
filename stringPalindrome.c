#include<stdio.h>
#include<string.h>

int main() {
    char word[100], copy[100];
    int i, j;
    printf("Enter the Word: ");
    scanf("%s", word);

    strcpy(copy, word);

    int length = strlen(word);

    for(i = 0, j = length - 1; i < j; i++, j--) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    if (strcmp(word, copy) == 0) {
        printf("Is Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
