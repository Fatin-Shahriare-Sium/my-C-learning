#include <stdio.h>

int main() {
    char ch;
    
    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if it's an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an Alphabet.\n", ch);
    }
    // Check if it's a digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    // Otherwise, it's a special character
    else {
        printf("'%c' is a Special Character.\n", ch);
    }
    
    return 0;
}
