#include <stdio.h>

int main() {
    char chuoi[1000];
    printf("Nhap chuoi ma ban muon them vao file bt01.txt: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    // Mo file bt01.txt
    FILE *file = fopen("bt01.txt", "w");
    if (file==NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    // Ghi chuoi vao file
    fprintf(file, "%s", chuoi);
    // Dong file sau khi ghi xong
    fclose(file);
    printf("Da ghi chuoi vao file bt01.txt.\n");
    return 0;
}

