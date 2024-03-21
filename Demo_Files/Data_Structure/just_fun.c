#include <stdio.h>
#include<errno.h>
int main() {
    FILE *fp = fopen("data.txt", "r"); // Open a file for reading

    if (fp == NULL) {

        perror("fopen failed"); // Print error message with perror

        printf("Error details: %s\n", strerror(errno)); // Print detailed error using strerror
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) // Read until EOF
        {
        if(ch!=' ')
            if(ch!='\n')
                printf("%c", ch-32);
            else
                printf("\n");
        else
            printf(" ");
    }
    // Check if EOF was reached using feof()

    if (feof(fp)) {
        printf("\nReached the end of the file (EOF).\n");
    } else {
        printf("\nAn error occurred while reading the file.\n");
    }
    fclose(fp);
    return 0;
}
