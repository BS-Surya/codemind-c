#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    scanf("%[^
]s",&a);
    strcpy(b,a);
    printf("%s",b);
}