#include<stdio.h>
#include<string.h>

void length();
void copy();
void cat();
void compare();

int main() {
    length();
    copy();
    cat();
    compare();

    return 0;
}

void length() {
    char ch[7] = {'H', 'E', 'L', 'L', 'O', ' ', '\0'};
    char ch2[6] = "WORLD ";
    int length = strlen(ch2);  // Length
    printf("%d\n", length);
}

void copy() {
    char ch2[6] = "WORLD";
    char copy[7];  // Size should be same as ch
    strcpy(copy,ch2);  // Copy
    printf("%s\n",copy);
}

void cat() {
    char ch[7] = "HELLO";
    char ch2[6] = "WORLD ";
    strcat(ch2,ch);  
    printf("%s\n",ch);
}

void compare() {
    char one[] = "COMPUTER";
    char two[] = "COMPUTER";
    if (strcmp(one,two) == 0) {
        printf("Equal\n");
    } else {
        printf("Not Equal\n");
    }
}
