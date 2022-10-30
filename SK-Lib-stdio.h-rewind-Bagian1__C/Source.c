#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int n;
    FILE* pFile;
    char buffer[27];

    pFile = fopen("myfile.txt", "w+");

    for (n = 'A'; n <= 'Z'; n++) {
        fputc(n, pFile);
    }
        
    rewind(pFile);
    fread(buffer, 1, 26, pFile);
    fclose(pFile);
    buffer[26] = '\0';
    puts(buffer);

    _getch();
    return 0;
}