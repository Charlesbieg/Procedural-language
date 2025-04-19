int read_from_file(const char *short_url, char *original_url) {
    FILE *file = fopen("urls.txt", "r");
    if (file == NULL) { perror("File error"); return 0; }
    while (fscanf(file, "%s %s", original_url, short_url) != EOF) {
        if (strcmp(short_url, short_url) == 0) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}
