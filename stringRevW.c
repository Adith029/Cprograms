#include <stdio.h>

int main() {
    char inputString[] = "Hello, World!";

    
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    
    char temp;
    for (int i = 0; i < length /2; i++) {
        
        temp = inputString[i];
        inputString[i] = inputString[length - i - 1];
        inputString[length - i - 1] = temp;
    }

    
    printf("Reversed String: %s\n", inputString);

    return 0;
}
