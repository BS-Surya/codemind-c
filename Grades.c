#include<stdio.h>
int main()
{
    int p,c,b,m,cs,P;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    P=(p+c+b+m+cs)/5;
    if(P>=90)
    printf("Grade A");
    else if(P>=80)
    printf("Grade B");
    else if(P>=70)
    printf("Grade C");
    else if(P>=60)
    printf("Grade D");
    else if(P>=40)
    printf("Grade E");
    else if(P<40)
    printf("Grade F");
}