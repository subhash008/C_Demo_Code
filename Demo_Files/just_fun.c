#include <stdio.h>
int main() {

    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        perror("fopen failed");
        return 1;
    }
    char data = fgetc(fp); // Read a character
    if (ferror(fp)) {
        perror("fgetc failed");
        fclose(fp);
        return 1;
    }
    printf("%c",data);

    data = fgetc(fp);
    printf("%c",data);

    data = fgetc(fp);
    printf("%c",data);
    // Process the read data
    fclose(fp);
    return 0;
}
