// url_shortener.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_URL_LENGTH 2048
#define SHORT_URL_LENGTH 6

// Function prototypes
void get_input(char *url);
void generate_short_url(char *short_url);

int main() {
    char original_url[MAX_URL_LENGTH];
    char short_url[SHORT_URL_LENGTH + 1];
    get_input(original_url);
    generate_short_url(short_url);
    printf("Shortened URL: %s\n", short_url);
    return 0;
}

// Function to get the URL input from the user
void get_input(char *url) {
    printf("Enter the URL: ");
    fgets(url, MAX_URL_LENGTH, stdin);
    url[strcspn(url, "\n")] = 0;  // Remove the newline character
}

// Function to generate a random short URL
void generate_short_url(char *short_url) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));
    for (int i = 0; i < SHORT_URL_LENGTH; i++) {
        short_url[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    short_url[SHORT_URL_LENGTH] = '\0';  // Null-terminate the string
}
