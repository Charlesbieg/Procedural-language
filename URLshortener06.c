void save_to_file(const char *original_url, const char *short_url) {
    FILE *file = fopen("urls.txt", "a");
    if (file == NULL) { perror("File error"); exit(1); }
    fprintf(file, "%s %s\n", original_url, short_url);
    fclose(file);
}
