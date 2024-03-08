#include<stdio.h>
int main()
{
    char s[50],l=0,c=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        l=l+1;
    }
    for(i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        c++;
    }
    printf("%d",c);
}