#include<stdio.h>
double sqr(int e)
{
    for(f=1;f*f<=e;f++)
            { 
                if((f*f)==e) 
                   printf("%d", f); 
            } 
}
int main() {
    int e;
    scanf("%d",&e);
    sqr(e);
}