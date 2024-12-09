#include <stdio.h>
#include <string.h>

// Function to count vowels in a string
int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = *str;
        // Check if the character is a vowel (case insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        // Swap characters
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100]; // Array to hold the input string

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to include spaces
    str[strcspn(str, "\n")] = 0; // Remove newline character from the input

    // Count vowels
    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);

    // Reverse the string
    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}