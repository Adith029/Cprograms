#include <stdio.h>

int main() {
    char inputString[] = "Hello, World!";

    
    for (int i = 0; inputString[i] != '\0'; i++) {
        
        if (inputString[i] >= 'a' && inputString[i] <= 'z') {
            
            inputString[i] = inputString[i] - 32;
        }
    }


    printf("Uppercase String: %s\n", inputString);

    return 0;
}
