#include<stdio.h>
int main()
{
    int a,b,i,j,c;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c+=1;
        }
        if(c==2)
        printf("%d
",i);
    }
}