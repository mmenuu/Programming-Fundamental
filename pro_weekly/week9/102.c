#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* morseEncode(char x)
{
    switch (x)
    {
    case 'a':
        printf(".-");
        break;
    case 'b':
        printf("-...");
        break;
    case 'c':
        printf("-.-.");
        break;
    case 'd':
        printf("-..");
        break;
    case 'e':
        printf(".");
        break;
    case 'f':
        printf("..-.");
        break;
    case 'g':
        printf("--.");
        break;
    case 'h':
        printf("....");
        break;
    case 'i':
        printf("..");
        break;
    case 'j':
        printf(".---");
        break;
    case 'k':
        printf("-.-");
        break;
    case 'l':
        printf(".-..");
        break;
    case 'm':
        printf("--");
        break;
    case 'n':
        printf("-.");
        break;
    case 'o':
        printf("---");
        break;
    case 'p':
        printf(".--.");
        break;
    case 'q':
        printf("--.-");
        break;
    case 'r':
        printf(".-.");
        break;
    case 's':
        printf("...");
        break;
    case 't':
        printf("-");
        break;
    case 'u':
        printf("..-");
        break;
    case 'v':
        printf("...-");
        break;
    case 'w':
        printf(".--");
        break;
    case 'x':
        printf("-..-");
        break;
    case 'y':
        printf("-.--");
        break;
    case 'z':
        printf("--..");
        break;
    default:
        return 0;
    }
    printf(" ");
}
void morseCode(char s[])
{
    int len = strlen(s);
    for (int i = 0; i <= len; i++)
        morseEncode(tolower(s[i]));
}
int main()
{
    char s[100];
    scanf("%s", &s);
    morseCode(s);
    return 0;
}