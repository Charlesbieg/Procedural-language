void get_input(char *url) {
    printf("Enter URL: ");
    fgets(url, 2048, stdin);
    url[strcspn(url, "\n")] = 0;
}
