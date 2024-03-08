#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
    scanf("%[^
]s",a);
    scanf(" %[^
]s",b);
    int res=strcmp(a,b);
	if(res==0)
	printf("Strings are Equal");
	else
	printf("Strings are not Equal");
}