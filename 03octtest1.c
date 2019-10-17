/*find if a substring is present in a string*/
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,l,sum=0,k,sum1;
    char s[1000],str[200];
    scanf("%[^\n]*c",s);
    scanf("%s",str);
    l=strlen(str);
    j=l;
    for(i=0;i<l;i++)
    sum=sum+(int )str[i];
    for(i=0;i<strlen(s);i++)
    {k=i;
    sum1=0;
    j=l;
        while(j!=0)
        {
            sum1=sum1+(int )s[k];
            k++;
            j--;
        }
        if(sum==sum1)
            break;
        else
            continue;
    }
    if(sum1==sum)
        printf("Found");
    else
        printf("Not Found");

}
