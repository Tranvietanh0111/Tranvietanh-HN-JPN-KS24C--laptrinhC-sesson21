#include <stdio.h>


int main() {
    FILE *file;
    char input[256];  

    file = fopen("bt01.txt", "a");
    
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;  
    }

    printf("Nhap chuoi can ghi vao file: ");
    fgets(input, sizeof(input), stdin);  

    // Ghi chuoi vao file
    fprintf(file, "%s", input);

    // Ðong file sau khi ghi
    fclose(file);

    printf("Chuoi da duoc ghi vao file bt01.txt.\n");

    return 0;
}
