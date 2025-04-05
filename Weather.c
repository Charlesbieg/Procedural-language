#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showMenu();
void showWeather(int cityChoice);
void getRandomWeather(char* condition, int* temperature, int* humidity);

int main() {
    int cityChoice;
    char repeat;

    srand(time(NULL)); // Seed for random weather

    do {
        showMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &cityChoice);

        if (cityChoice >= 1 && cityChoice <= 5) {
            showWeather(cityChoice);
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        printf("\nDo you want to check another city? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("Thank you for using the Weather Forecast App.\n");
    return 0;
}

void showMenu() {
    printf("\n=== Weather Forecast App ===\n");
    printf("1. New York\n");
    printf("2. London\n");
    printf("3. Tokyo\n");
    printf("4. Nairobi\n");
    printf("5. Mumbai\n");
}

void showWeather(int cityChoice) {
    char* cities[] = {"New York", "London", "Tokyo", "Nairobi", "Mumbai"};
    char condition[20];
    int temperature, humidity;

    getRandomWeather(condition, &temperature, &humidity);

    printf("\n--- Weather Report ---\n");
    printf("City: %s\n", cities[cityChoice - 1]);
    printf("Condition: %s\n", condition);
    printf("Temperature: %d°C\n", temperature);
    printf("Humidity: %d%%\n", humidity);
}

void getRandomWeather(char* condition, int* temperature, int* humidity) {
    char* conditions[] = {"Sunny", "Cloudy", "Rainy", "Stormy", "Windy"};
    int condIndex = rand() % 5;
    *temperature = (rand() % 35) + 5; // 5°C to 40°C
    *humidity = (rand() % 60) + 20;   // 20% to 80%

    sprintf(condition, "%s", conditions[condIndex]);
}
