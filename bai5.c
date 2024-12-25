#include <stdio.h>

int main() {
    FILE *file;
    int num_lines;
    char line[246];  

    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &num_lines);
    getchar();  

    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the tao hoac mo file.\n");
        return 1; 
    }

    for (int i = 0; i < num_lines; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);  
        fprintf(file, "%s", line);  
    }

    fclose(file);

    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;  
    }
    
    printf("\nNoi dung cua file bt05.txt la:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); 
    }

    fclose(file);

    return 0;
}

