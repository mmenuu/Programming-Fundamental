#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char pathone[100];
    char pathtwo[100];
    char cmd[200]; 

    scanf("%s",&pathone);
    scanf("%s",&pathtwo);

    sprintf(cmd, "copy %s %s", pathone, pathtwo);
    // printf("%s", cmd);
    system(cmd);

    // printf("done");
    return 0;
}