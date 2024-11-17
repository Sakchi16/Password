#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_PASSWORD_LENGTH 8

int has_uppercase(const char *password) {
    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            return 1;
        }
    }
    return 0;
}

int has_lowercase(const char *password) {
    for (int i = 0; i < strlen(password); i++) {
        if (islower(password[i])) {
            return 1;
        }
    }
    return 0;
}

int has_digit(const char *password) {
    for (int i = 0; i < strlen(password); i++) {
        if (isdigit(password[i])) {
            return 1;
        }
    }
    return 0;
}

int has_special_char(const char *password) {
    for (int i = 0; i < strlen(password); i++) {
        if (!isalnum(password[i])) {
            return 1;
        }
    }
    return 0;
}

int analyze_password(const char *password) {
    if (strlen(password) < MIN_PASSWORD_LENGTH) {
        printf("Password is too short. It should be at least %d characters.\n", MIN_PASSWORD_LENGTH);
        return 0;
    }
    if (!has_uppercase(password)) {
        printf("Password should have at least one uppercase letter.\n");
        return 0;
    }
    if (!has_lowercase(password)) {
        printf("Password should have at least one lowercase letter.\n");
        return 0;
    }
    if (!has_digit(password)) {
        printf("Password should have at least one digit.\n");
        return 0;
    }
    if (!has_special_char(password)) {
        printf("Password should have at least one special character.\n");
        return 0;
    }
    printf("Password is strong.\n");
    return 1;
}

int main() {
    char password[256];
    printf("Enter a password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; // remove newline character
    analyze_password(password);
    return 0;
}
