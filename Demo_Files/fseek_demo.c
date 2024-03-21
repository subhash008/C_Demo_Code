#include <stdio.h>

int main() {
  FILE *fp = fopen("data.txt", "r+"); // Open for reading and writing

  if (fp == NULL) {
    perror("fopen failed");
    return 1;
  }

  // Write some sample data to the file
  fprintf(fp, "This is some sample text.\n");
  fprintf(fp, "This is another line of text.\n");

  printf("Current file position (after writing): %ld\n", ftell(fp)); // Get current position

  // Rewind the file pointer to the beginning using rewind
  rewind(fp);
  printf("File position after rewind: %ld\n", ftell(fp)); // Check position after rewind

  // Read and print the first line using fgets
  char buffer[100];
  fgets(buffer, sizeof(buffer), fp);
  printf("First line: %s", buffer);

  // Move the file pointer 15 bytes forward using fseek
  long offset = 15; // Adjust offset as needed
  if (fseek(fp, offset, SEEK_SET) != 0) { // Check for errors
    perror("fseek failed");
    fclose(fp);
    return 1;
  }

  // Read and print the remaining content from the current position
  printf("Remaining content:\n");
  while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    printf("%s", buffer);
  }

  fclose(fp);
  return 0;
}
