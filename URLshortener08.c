char retrieved_url[2048];
if (read_from_file(short_url, retrieved_url)) {
    printf("Original URL: %s\n", retrieved_url);
} else {
    printf("Not found\n");
}
