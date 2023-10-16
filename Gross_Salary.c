#include<stdio.h>
int main()
{
    int b;
    float D,H,g;
    scanf("%d",&b);
    if(b<=10000)
    {
    D=80*b/100.0;
    H=20*b/100.0;
    g=b+D+H;
    printf("%.2f",g);
    }
    else if(b<=20000)
    {
    D=90*b/100.0;
    H=25*b/100.0;
    g=b+D+H;
    printf("%.2f",g);
    }
    else if(b>20000)
    {
    D=95*b/100.0;
    H=30*b/100.0;
    g=b+D+H;
    printf("%.2f",g);
    }
}