void generate_short_url(char *short_url) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        short_url[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    short_url[6] = '\0';
}
