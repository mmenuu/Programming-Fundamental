#include<stdio.h>
double sqr(int number)
{
    double root=1;
    int i = 0;   
    while (1)
    {
        i = i + 1;
        root = (number / root + root) / 2;


        if (i == number + 1) 
        {
            break; 
        }
    }
    printf("%.2f",root);
}
int main() {
    int number;
    scanf("%d",&number);
    sqr(number);
}