// url_shortener.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_URL_LENGTH 2048
#define SHORT_URL_LENGTH 6

// Function prototypes
void get_input(char *url);

int main() {
    char original_url[MAX_URL_LENGTH];
    get_input(original_url);
    printf("You entered: %s\n", original_url);
    return 0;
}

// Function to get the URL input from the user
void get_input(char *url) {
    printf("Enter the URL: ");
    fgets(url, MAX_URL_LENGTH, stdin);
    url[strcspn(url, "\n")] = 0;  // Remove the newline character
}
