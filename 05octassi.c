/*Reverse of a string*/
#include<stdio.h>
char* reverse(char *str)
{
    int i,l=0,k;
    char s[100];
    char *p=(char *)malloc(sizeof(char *));
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }k=0;
    for(i=l-1;i>=0;i--)
    {
        p[k]=str[i];
        k++;
    }
    p[k]='\0';
    return p;
}
int main()
{
   char str[100];
   scanf("%[^\n]%*c",str);
   printf("%s",reverse(str));
   return 0;
}
