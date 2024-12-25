#include <stdio.h>

int main() {
    FILE *file;
    char line[256];  

    file = fopen("bt01.txt", "r");

    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file: %s", line);
    } else {
        printf("Khong the doc dong dau tien trong file.\n");
    }

    fclose(file);

    return 0;
}
