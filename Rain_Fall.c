#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    if(r<3)
    printf("LIGHT");
    else if(3<=r&&r<7)
    printf("MODERATE");
    else if(r>=7)
    printf("HEAVY");
}