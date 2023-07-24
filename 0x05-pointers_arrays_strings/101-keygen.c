#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8 // You can adjust this to your desired password length

// Function to generate a random character from the character set
char generate_random_char() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

// Function to generate a random valid password for 101-crackme
void generate_password() {
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate random characters for the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_char();
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

    // Print the generated password
    printf("Random valid password for 101-crackme: %s\n", password);
}

int main() {
    generate_password();
    return 0;
}

