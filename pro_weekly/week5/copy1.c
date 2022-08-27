#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *readFile,*writeFile;
    char buffer;
    char pathone[100];
    char pathtwo[100];
    scanf("%s",&pathone);
    scanf("%s",&pathtwo);
    readFile = fopen(pathone, "r");
    writeFile = fopen(pathtwo, "w");
    buffer = fgetc(readFile);
    while (buffer != EOF)
    {                                                                                                                                                                                                                                                                                  
        fputc(buffer, writeFile);
        buffer = fgetc(readFile);
    }


    fclose(readFile);
    fclose(writeFile);

    return 0;
}

